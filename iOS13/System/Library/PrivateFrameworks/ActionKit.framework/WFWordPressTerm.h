/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSNumber, NSString, NSDictionary;

@interface WFWordPressTerm : MTLModel <MTLJSONSerializing> {

	NSNumber* _termId;
	NSString* _name;
	NSString* _taxonomy;

}

@property (nonatomic,copy,readonly) NSNumber * termId;                           //@synthesize termId=_termId - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * taxonomy;                         //@synthesize taxonomy=_taxonomy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
+(id)termIdJSONTransformer;
-(NSString *)name;
-(NSString *)taxonomy;
-(NSNumber *)termId;
@end

