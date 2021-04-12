/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)username;
-(NSURL *)URL;
-(NSString *)email;
@end

