/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSArray, NSError;

@interface PKPaymentAuthorizationInvalidDataStateParam : PKPaymentAuthorizationStateParam {

	long long _dataType;
	long long _status;
	NSArray* _clientErrors;
	NSError* _error;

}

@property (assign,nonatomic) long long dataType;                  //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) long long status;                    //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSArray * clientErrors;              //@synthesize clientErrors=_clientErrors - In the implementation block
@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
+(id)paramWithDataType:(long long)arg1 status:(long long)arg2 error:(id)arg3 clientErrors:(id)arg4 ;
-(long long)dataType;
-(void)setDataType:(long long)arg1 ;
-(NSArray *)clientErrors;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)description;
-(void)setClientErrors:(NSArray *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(long long)status;
@end

