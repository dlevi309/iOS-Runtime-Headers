/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>

@class AMSProcessInfo, NSString;

@interface AMSSetDemoAccountTask : AMSTask {

	AMSProcessInfo* _clientInfo;
	NSString* _password;
	NSString* _username;

}

@property (nonatomic,retain) AMSProcessInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) NSString * password;                      //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * username;                      //@synthesize username=_username - In the implementation block
-(void)setUsername:(NSString *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(NSString *)password;
-(NSString *)username;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
-(id)performTask;
@end

