/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setType:(int)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(int)type;
-(NSString *)authenticationText;
-(void)setAuthenticationText:(NSString *)arg1 ;
-(NSDictionary *)configInfo;
@end

