/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@class UIDocumentInteractionController, NSString;

@interface SUDocumentInteractionSession : NSObject <UIDocumentInteractionControllerDelegate> {

	/*^block*/id _completionHandler;
	UIDocumentInteractionController* _documentInteractionController;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cancel;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1 ;
-(void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2 ;
-(id)initWithDocumentInteractionController:(id)arg1 ;
@end

