/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMEventListenerResponse.h>
@class NSDictionary, NSError;


@protocol IMEventListenerResponse <NSObject>
@property (getter=didSucceed,nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,readonly) NSError * error; 
@required
-(NSDictionary *)userInfo;
-(NSError *)error;
-(BOOL)didSucceed;

@end


@class NSDictionary, NSError, NSString;

@interface IMEventListenerResponse : NSObject <IMEventListenerResponse> {

	BOOL _success;
	NSDictionary* _userInfo;
	NSError* _error;

}

@property (assign,getter=didSucceed,nonatomic) BOOL success;              //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSError * error;                             //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(NSDictionary *)userInfo;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSString *)description;
-(id)initWithSuccess:(BOOL)arg1 userInfo:(id)arg2 error:(id)arg3 ;
-(BOOL)didSucceed;
@end

