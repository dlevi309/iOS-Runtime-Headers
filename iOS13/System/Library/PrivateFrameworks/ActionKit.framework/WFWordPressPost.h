/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSNumber, NSURL, NSString, NSDictionary;

@interface WFWordPressPost : MTLModel <MTLJSONSerializing> {

	NSNumber* _postId;
	NSURL* _link;

}

@property (nonatomic,copy,readonly) NSNumber * postId;                           //@synthesize postId=_postId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * link;                                //@synthesize link=_link - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
+(id)postIdJSONTransformer;
+(id)linkJSONTransformer;
-(NSURL *)link;
-(NSNumber *)postId;
@end

