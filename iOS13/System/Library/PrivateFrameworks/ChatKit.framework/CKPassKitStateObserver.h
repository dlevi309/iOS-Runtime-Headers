/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@interface CKPassKitStateObserver : NSObject {

	BOOL _passKitUIPresented;
	BOOL _iTunesStoreDialogPresented;

}

@property (assign,nonatomic) BOOL passKitUIPresented;                      //@synthesize passKitUIPresented=_passKitUIPresented - In the implementation block
@property (assign,nonatomic) BOOL iTunesStoreDialogPresented;              //@synthesize iTunesStoreDialogPresented=_iTunesStoreDialogPresented - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)prepareForResume;
-(BOOL)passKitUIPresented;
-(BOOL)iTunesStoreDialogPresented;
-(void)setITunesStoreDialogPresented:(BOOL)arg1 ;
-(void)setPassKitUIPresented:(BOOL)arg1 ;
-(void)_passKitUIDismissed;
-(void)_iTunesStoreDialogDidDismiss;
-(void)_iTunesStoreDialogWillDisplay;
-(void)_passKitUIPresented;
@end

