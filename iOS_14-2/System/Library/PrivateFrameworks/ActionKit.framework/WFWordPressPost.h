/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSNumber, NSURL, NSDictionary, NSString;

@interface WFWordPressPost : MTLModel <MTLJSONSerializing> {

	NSNumber* _postId;
	NSURL* _link;

}

@property (nonatomic,copy,readonly) NSNumber * postId;                           //@synthesize postId=_postId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * link;                                //@synthesize link=_link - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
+(id)postIdJSONTransformer;
+(id)linkJSONTransformer;
-(NSURL *)link;
-(NSNumber *)postId;
@end

