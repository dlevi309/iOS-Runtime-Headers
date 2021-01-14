/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSDictionary;

@interface WFWordPressPostType : MTLModel <MTLJSONSerializing> {

	NSString* _name;
	NSString* _label;
	NSDictionary* _labels;

}

@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                            //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * labels;                       //@synthesize labels=_labels - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
-(NSDictionary *)labels;
-(NSString *)name;
-(NSString *)label;
@end

