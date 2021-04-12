/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@class NSArray, NSDictionary;

@interface KGElementFilter : NSObject {

	NSArray* _labels;
	NSDictionary* _properties;

}

@property (nonatomic,readonly) NSArray * labels;                       //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
+(id)any;
-(NSDictionary *)properties;
-(NSArray *)labels;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLabels:(id)arg1 properties:(id)arg2 ;
@end

