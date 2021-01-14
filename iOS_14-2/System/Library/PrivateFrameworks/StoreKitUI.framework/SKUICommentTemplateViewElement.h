/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUICommentTemplateViewElement : SKUIViewElement {

	BOOL _scrollNewCommentToView;
	BOOL _showKeyboard;
	NSString* _asText;
	NSString* _asFormat;
	NSString* _commentAsText;
	NSString* _myselfText;
	NSString* _postButtonText;
	NSString* _postPlaceholderText;

}

@property (nonatomic,readonly) NSString * asText;                           //@synthesize asText=_asText - In the implementation block
@property (nonatomic,readonly) NSString * asFormat;                         //@synthesize asFormat=_asFormat - In the implementation block
@property (nonatomic,readonly) NSString * commentAsText;                    //@synthesize commentAsText=_commentAsText - In the implementation block
@property (nonatomic,readonly) NSString * myselfText;                       //@synthesize myselfText=_myselfText - In the implementation block
@property (nonatomic,readonly) NSString * postButtonText;                   //@synthesize postButtonText=_postButtonText - In the implementation block
@property (nonatomic,readonly) NSString * postPlaceholderText;              //@synthesize postPlaceholderText=_postPlaceholderText - In the implementation block
@property (nonatomic,readonly) BOOL scrollNewCommentToView;                 //@synthesize scrollNewCommentToView=_scrollNewCommentToView - In the implementation block
@property (nonatomic,readonly) BOOL showKeyboard;                           //@synthesize showKeyboard=_showKeyboard - In the implementation block
-(NSString *)asText;
-(NSString *)asFormat;
-(BOOL)showKeyboard;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(NSString *)commentAsText;
-(NSString *)myselfText;
-(NSString *)postButtonText;
-(NSString *)postPlaceholderText;
-(BOOL)scrollNewCommentToView;
@end
