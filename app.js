jQuery(function($) {
    $('.resposive').click(function() {
        return false;
    }).dblclick(function() {
        window.location = this.href;
        return false;
    });
});