/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <libobjc.A.dylib/TKTokenAccessUserPrompt.h>

@class NSString;

@interface TKTokenAccessUserPromptNoop : NSObject <TKTokenAccessUserPrompt> {

	long long _preflightStatus;

}

@property (assign,nonatomic) long long preflightStatus;              //@synthesize preflightStatus=_preflightStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)preflightStatus;
-(long long)promptUserToEvaluateRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithPreflightStatus:(long long)arg1 ;
-(void)setPreflightStatus:(long long)arg1 ;
@end

