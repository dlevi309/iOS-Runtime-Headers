/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setITunesStoreDialogPresented:(BOOL)arg1 ;
-(void)setPassKitUIPresented:(BOOL)arg1 ;
-(void)_passKitUIDismissed;
-(void)_iTunesStoreDialogDidDismiss;
-(void)_iTunesStoreDialogWillDisplay;
-(void)_passKitUIPresented;
-(BOOL)passKitUIPresented;
-(BOOL)iTunesStoreDialogPresented;
-(id)description;
-(void)prepareForResume;
-(void)dealloc;
@end

