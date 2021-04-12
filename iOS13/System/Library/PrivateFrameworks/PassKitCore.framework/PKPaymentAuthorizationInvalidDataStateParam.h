/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(long long)status;
-(long long)dataType;
-(void)setStatus:(long long)arg1 ;
-(void)setDataType:(long long)arg1 ;
-(void)setClientErrors:(NSArray *)arg1 ;
-(NSArray *)clientErrors;
@end

