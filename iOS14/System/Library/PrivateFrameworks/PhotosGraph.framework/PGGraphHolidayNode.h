/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PGGraphLocalizable.h>

@class NSString;

@interface PGGraphHolidayNode : PGGraphOptimizedNode <PGGraphLocalizable> {

	unsigned _category : 8;
	NSString* _name;

}

@property (assign,nonatomic) unsigned long long category;              //@synthesize category=_category - In the implementation block
@property (readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)localizedName;
-(void)setCategory:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)category;
-(unsigned short)domain;
-(NSString *)name;
-(void)enumerateCelebratingMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(void)enumerateCelebratingHighlightNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
@end

