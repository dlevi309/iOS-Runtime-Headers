/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
*/


#import <KeychainCircle/KeychainCircle-Structs.h>
@class NSString;

@interface KCSRPContext : NSObject {

	ccsrp_ctx* _context;
	ccrng_state* _rng;
	NSString* _user;

}

@property (assign) ccsrp_ctx* context;              //@synthesize context=_context - In the implementation block
@property (assign) ccrng_state* rng;                //@synthesize rng=_rng - In the implementation block
@property (retain) NSString * user;                 //@synthesize user=_user - In the implementation block
+(id)createWithUser:(id)arg1 digestInfo:(const ccdigest_info*)arg2 group:(ccdh_gp*)arg3 randomSource:(ccrng_state*)arg4 ;
-(BOOL)isAuthenticated;
-(ccrng_state*)rng;
-(void)finalize;
-(void)setUser:(NSString *)arg1 ;
-(ccsrp_ctx*)context;
-(id)getKey;
-(NSString *)user;
-(void)setRng:(ccrng_state*)arg1 ;
-(void)setContext:(ccsrp_ctx*)arg1 ;
-(id)dataForPassword:(id)arg1 ;
-(const char*)userNameString;
-(id)initWithUser:(id)arg1 digestInfo:(const ccdigest_info*)arg2 group:(ccdh_gp*)arg3 randomSource:(ccrng_state*)arg4 ;
@end

