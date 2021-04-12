/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSDictionary *)data;
-(ASTErrorStatus *)error;
-(void)setData:(NSDictionary *)arg1 ;
-(void)setError:(ASTErrorStatus *)arg1 ;
-(NSNumber *)progress;
-(void)setProgress:(NSNumber *)arg1 ;
-(NSNumber *)currentTest;
-(void)setCurrentTest:(NSNumber *)arg1 ;
-(void)setClientStatus:(long long)arg1 ;
-(id)generatePayload;
-(long long)clientStatus;
@end

