/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@protocol UIDocumentInteractionControllerDelegate;
@class NSString;

@interface QLCustomURLSharingProxyDelegate : NSObject <UIDocumentInteractionControllerDelegate> {

	id<UIDocumentInteractionControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UIDocumentInteractionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UIDocumentInteractionControllerDelegate>)delegate;
-(void)setDelegate:(id<UIDocumentInteractionControllerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1 ;
@end

