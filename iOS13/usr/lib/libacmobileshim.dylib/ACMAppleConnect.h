/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@class NSString;

@interface ACMAppleConnect : NSObject {

	id _private;
	id _delegate;

}

@property (assign) id delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * version; 
@property (assign,nonatomic) unsigned long long logLevel; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NSString *)version;
-(unsigned long long)logLevel;
-(void)setLogLevel:(unsigned long long)arg1 ;
-(void)cancelRequests;
-(void)authenticate:(id)arg1 ;
-(void)authenticateWithRequest:(id)arg1 password:(id)arg2 ;
-(id)private;
-(void)handleMemoryWarningNotification:(id)arg1 ;
-(void)setupComponents;
-(void)verifyServiceTicket:(id)arg1 ;
-(id)hideAppleConnectSignInDialog;
@end

