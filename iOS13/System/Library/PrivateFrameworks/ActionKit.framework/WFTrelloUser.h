/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFTrelloObject.h>

@class NSString, NSURL;

@interface WFTrelloUser : WFTrelloObject {

	NSString* _email;
	NSString* _username;
	NSURL* _URL;

}

@property (nonatomic,readonly) NSString * email;                 //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                      //@synthesize URL=_URL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
-(NSURL *)URL;
-(NSString *)username;
-(NSString *)email;
@end

