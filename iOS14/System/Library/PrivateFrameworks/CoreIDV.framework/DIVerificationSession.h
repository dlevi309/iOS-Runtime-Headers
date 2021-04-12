/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithContext:(id)arg1 ;
-(DIVerificationSessionContext *)context;
-(void)invalidate;
-(void)performVerificationWithAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)shareVerificationResultWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getVerificationResultWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)concludeVerification;
@end

