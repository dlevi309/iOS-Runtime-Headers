/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSString, NSDictionary, NSError;

@interface CUOSRecoveryProgressEvent : NSObject {

	int _type;
	NSString* _authenticationText;
	NSDictionary* _configInfo;
	NSError* _error;

}

@property (nonatomic,copy) NSString * authenticationText;                   //@synthesize authenticationText=_authenticationText - In the implementation block
@property (nonatomic,copy) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) int type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * configInfo;              //@synthesize configInfo=_configInfo - In the implementation block
-(int)type;
-(void)setType:(int)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)authenticationText;
-(void)setAuthenticationText:(NSString *)arg1 ;
-(NSDictionary *)configInfo;
@end

