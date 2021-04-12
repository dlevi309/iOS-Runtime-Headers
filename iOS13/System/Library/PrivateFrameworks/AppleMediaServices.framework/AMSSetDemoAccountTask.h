/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id)performTask;
@end

