/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)fullName;
-(long long)mainIdentity;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(NSURL *)websiteURL;
-(void)setWebsiteURL:(NSURL *)arg1 ;
-(NSURL *)profileImageURL;
-(void)setProfileImageURL:(NSURL *)arg1 ;
-(NSString *)twitter;
-(void)setTwitter:(NSString *)arg1 ;
-(void)setMainIdentity:(long long)arg1 ;
@end

