/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSUUID, NSString, NSURL, NSDate, NSNumber, NSDictionary;

@interface WFWorkflowUser : MTLModel <MTLJSONSerializing> {

	NSUUID* _identifier;
	NSString* _email;
	NSString* _fullName;
	NSString* _twitter;
	NSURL* _websiteURL;
	NSURL* _profileImageURL;
	NSDate* _dateJoined;
	NSNumber* _isAdmin;
	long long _mainIdentity;

}

@property (nonatomic,readonly) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * email;                                 //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * fullName;                              //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,readonly) NSString * twitter;                               //@synthesize twitter=_twitter - In the implementation block
@property (nonatomic,readonly) NSURL * websiteURL;                               //@synthesize websiteURL=_websiteURL - In the implementation block
@property (nonatomic,readonly) NSURL * profileImageURL;                          //@synthesize profileImageURL=_profileImageURL - In the implementation block
@property (nonatomic,readonly) NSDate * dateJoined;                              //@synthesize dateJoined=_dateJoined - In the implementation block
@property (nonatomic,readonly) NSNumber * isAdmin;                               //@synthesize isAdmin=_isAdmin - In the implementation block
@property (nonatomic,readonly) long long mainIdentity;                           //@synthesize mainIdentity=_mainIdentity - In the implementation block
@property (nonatomic,readonly) NSString * websiteDisplayName; 
@property (nonatomic,readonly) NSString * twitterDisplayName; 
@property (nonatomic,readonly) NSString * displayName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
+(id)mainIdentityJSONTransformer;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSUUID *)identifier;
-(NSString *)displayName;
-(NSString *)fullName;
-(long long)mainIdentity;
-(NSString *)email;
-(NSNumber *)isAdmin;
-(NSURL *)websiteURL;
-(NSURL *)profileImageURL;
-(NSString *)twitter;
-(NSString *)websiteDisplayName;
-(NSString *)twitterDisplayName;
-(NSDate *)dateJoined;
@end

