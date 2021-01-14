/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class _UISearchTokenAttachmentViewProvider, UISearchToken;

@interface _UISearchTokenAttachment : NSTextAttachment {

	_UISearchTokenAttachmentViewProvider* _viewProvider;
	UISearchToken* _token;

}

@property (nonatomic,readonly) _UISearchTokenAttachmentViewProvider * _viewProvider;              //@synthesize viewProvider=_viewProvider - In the implementation block
@property (nonatomic,readonly) UISearchToken * token;                                             //@synthesize token=_token - In the implementation block
-(void)placeView:(id)arg1 withFrame:(CGRect)arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5 ;
-(id)init;
-(id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3 ;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(_UISearchTokenAttachmentViewProvider *)_viewProvider;
-(void)detachView:(id)arg1 fromParentView:(id)arg2 ;
-(BOOL)usesTextAttachmentView;
-(UISearchToken *)token;
-(id)initWithToken:(id)arg1 ;
-(id)initWithData:(id)arg1 ofType:(id)arg2 ;
@end

