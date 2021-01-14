/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFWorkflowUser.h>

@class NSString, NSURL;

@interface WFMutableWorkflowUser : WFWorkflowUser {

	NSString* email;
	NSString* fullName;
	NSString* twitter;
	NSURL* websiteURL;
	NSURL* profileImageURL;
	long long mainIdentity;

}

@property (nonatomic,copy) NSString * email; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,copy) NSString * twitter; 
@property (nonatomic,retain) NSURL * websiteURL; 
@property (nonatomic,retain) NSURL * profileImageURL; 
@property (assign,nonatomic) long long mainIdentity; 
-(void)setFullName:(NSString *)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)fullName;
-(long long)mainIdentity;
-(NSURL *)websiteURL;
-(void)setWebsiteURL:(NSURL *)arg1 ;
-(NSString *)twitter;
-(NSString *)email;
-(NSURL *)profileImageURL;
-(void)setProfileImageURL:(NSURL *)arg1 ;
-(void)setTwitter:(NSString *)arg1 ;
-(void)setMainIdentity:(long long)arg1 ;
@end

