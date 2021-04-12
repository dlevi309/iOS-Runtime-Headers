/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(UISearchToken *)token;
-(id)initWithToken:(id)arg1 ;
-(BOOL)usesTextAttachmentView;
-(id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3 ;
-(void)placeView:(id)arg1 withFrame:(CGRect)arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5 ;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(id)initWithData:(id)arg1 ofType:(id)arg2 ;
-(void)detachView:(id)arg1 fromParentView:(id)arg2 ;
-(_UISearchTokenAttachmentViewProvider *)_viewProvider;
@end

