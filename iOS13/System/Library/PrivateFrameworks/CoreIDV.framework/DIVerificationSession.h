/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
*/


@class DIVClient, DIVerificationSessionContext, NSError;

@interface DIVerificationSession : NSObject {

	DIVClient* _client;
	DIVerificationSessionContext* _context;
	NSError* _configureError;

}

@property (nonatomic,readonly) DIVerificationSessionContext * context;              //@synthesize context=_context - In the implementation block
+(void)concludeVerification:(id)arg1 ;
-(void)invalidate;
-(DIVerificationSessionContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)performVerificationWithAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)shareVerificationResultWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getVerificationResultWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)concludeVerification;
@end

