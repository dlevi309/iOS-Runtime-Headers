/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PGGraphLocalizable.h>
#import <libobjc.A.dylib/PGGraphSynonymSupport.h>

@class NSString, NSArray;

@interface PGGraphSeasonNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport> {

	NSString* _name;

}

@property (readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * localizedSynonyms; 
+(id)_localizationKeyForSeasonNode:(id)arg1 ;
-(NSString *)localizedName;
-(id)init;
-(NSArray *)localizedSynonyms;
-(unsigned short)domain;
-(NSString *)name;
-(NSString *)description;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
@end

