/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@class NSArray, NSDictionary;

@interface MAIndexCache : NSObject {

	NSArray* _labels;
	NSDictionary* _cache;

}

@property (nonatomic,readonly) NSDictionary * cache;               //@synthesize cache=_cache - In the implementation block
@property (nonatomic,copy,readonly) NSArray * labels;              //@synthesize labels=_labels - In the implementation block
-(NSDictionary *)cache;
-(NSArray *)labels;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLabels:(id)arg1 ;
-(long long)indexOfLabel:(id)arg1 ;
@end

