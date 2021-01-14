/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PGGraphLocalizable.h>
#import <libobjc.A.dylib/PGGraphSynonymSupport.h>

@class NSString, NSArray;

@interface PGGraphPublicEventCategoryNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport> {

	NSString* _label;
	NSString* _localizedName;

}

@property (nonatomic,readonly) NSString * localizedName;                 //@synthesize localizedName=_localizedName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * localizedSynonyms; 
+(id)filter;
-(id)associatedNodesForRemoval;
-(NSString *)localizedName;
-(id)initWithLabel:(id)arg1 ;
-(NSArray *)localizedSynonyms;
-(unsigned short)domain;
-(NSString *)description;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
@end

