/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

@class NSString;


@protocol ACMSignInDialogProtocol <NSObject>
@property (assign) id<ACMSignInDialogDelegate> delegate; 
@property (nonatomic,retain) NSString * requestedUserName; 
@property (readonly) NSString * userNameString; 
@property (assign) NSString * passwordString; 
@required
-(id<ACMSignInDialogDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)cancel;
-(NSString *)userNameString;
-(NSString *)requestedUserName;
-(void)disableControls:(BOOL)arg1;
-(NSString *)passwordString;
-(void)setPasswordString:(id)arg1;
-(void)setRequestedUserName:(id)arg1;
-(void)showWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)hideWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

