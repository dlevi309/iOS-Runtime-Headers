/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsCore/TPSAsyncOperation.h>

@class TPSTargetingValidation, NSString;

@interface TPSTargetingValidateOperation : TPSAsyncOperation {

	TPSTargetingValidation* _validator;
	NSString* _context;
	long long _result;

}

@property (assign,nonatomic) long long result;                                  //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) TPSTargetingValidation * validator;              //@synthesize validator=_validator - In the implementation block
@property (nonatomic,copy) NSString * context;                                  //@synthesize context=_context - In the implementation block
-(void)setResult:(long long)arg1 ;
-(NSString *)context;
-(id)description;
-(TPSTargetingValidation *)validator;
-(void)main;
-(long long)result;
-(void)cancel;
-(void)setContext:(NSString *)arg1 ;
-(id)initWithTargetingCondition:(id)arg1 ;
@end

