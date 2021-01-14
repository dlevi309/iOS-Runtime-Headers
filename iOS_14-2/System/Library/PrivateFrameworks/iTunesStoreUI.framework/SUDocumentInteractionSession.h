/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1 ;
-(void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)cancel;
-(void)dealloc;
-(id)initWithDocumentInteractionController:(id)arg1 ;
@end

