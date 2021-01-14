/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSHashable.h>

@class NSString;

@interface AMSSignInContext : NSObject <AMSHashable> {

	BOOL _canMakeAccountActive;
	BOOL _ignoreAccountConversion;
	BOOL _skipAuthentication;
	NSString* _debugReason;

}

@property (assign,nonatomic) BOOL canMakeAccountActive;                   //@synthesize canMakeAccountActive=_canMakeAccountActive - In the implementation block
@property (nonatomic,retain) NSString * debugReason;                      //@synthesize debugReason=_debugReason - In the implementation block
@property (assign,nonatomic) BOOL ignoreAccountConversion;                //@synthesize ignoreAccountConversion=_ignoreAccountConversion - In the implementation block
@property (assign,nonatomic) BOOL skipAuthentication;                     //@synthesize skipAuthentication=_skipAuthentication - In the implementation block
@property (nonatomic,readonly) NSString * hashedDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)ignoreAccountConversion;
-(BOOL)canMakeAccountActive;
-(id)init;
-(NSString *)hashedDescription;
-(void)setDebugReason:(NSString *)arg1 ;
-(NSString *)debugReason;
-(BOOL)skipAuthentication;
-(void)setSkipAuthentication:(BOOL)arg1 ;
-(void)setCanMakeAccountActive:(BOOL)arg1 ;
-(void)setIgnoreAccountConversion:(BOOL)arg1 ;
@end

