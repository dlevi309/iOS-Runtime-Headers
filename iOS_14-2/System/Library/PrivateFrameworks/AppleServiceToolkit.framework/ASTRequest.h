/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/

#import <AppleServiceToolkit/ASTSealablePayload.h>

@class ASTErrorStatus, NSDictionary, NSNumber;

@interface ASTRequest : ASTSealablePayload {

	long long _clientStatus;
	ASTErrorStatus* _error;
	NSDictionary* _data;
	NSNumber* _currentTest;
	NSNumber* _progress;

}

@property (assign,nonatomic) long long clientStatus;              //@synthesize clientStatus=_clientStatus - In the implementation block
@property (nonatomic,retain) ASTErrorStatus * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSDictionary * data;                 //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSNumber * currentTest;              //@synthesize currentTest=_currentTest - In the implementation block
@property (nonatomic,retain) NSNumber * progress;                 //@synthesize progress=_progress - In the implementation block
+(id)request;
+(id)stringFromClientStatus:(long long)arg1 ;
-(NSNumber *)progress;
-(id)init;
-(void)setError:(ASTErrorStatus *)arg1 ;
-(ASTErrorStatus *)error;
-(void)setData:(NSDictionary *)arg1 ;
-(NSNumber *)currentTest;
-(id)description;
-(NSDictionary *)data;
-(void)setProgress:(NSNumber *)arg1 ;
-(void)setCurrentTest:(NSNumber *)arg1 ;
-(void)setClientStatus:(long long)arg1 ;
-(id)generatePayload;
-(long long)clientStatus;
@end

