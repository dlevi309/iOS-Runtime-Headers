/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)delegate;
-(void)cancelRequests;
-(void)setDelegate:(id)arg1 ;
-(unsigned long long)logLevel;
-(void)setLogLevel:(unsigned long long)arg1 ;
-(NSString *)version;
-(void)dealloc;
-(void)authenticate:(id)arg1 ;
-(void)authenticateWithRequest:(id)arg1 password:(id)arg2 ;
-(id)private;
-(void)handleMemoryWarningNotification:(id)arg1 ;
-(void)setupComponents;
-(void)verifyServiceTicket:(id)arg1 ;
-(id)hideAppleConnectSignInDialog;
@end

