/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGTitleSpecArgument.h>

@class NSSet, NSString;

@interface PGTitleSpecLocationArgument : PGTitleSpecArgument {

	BOOL _filterLocations;
	unsigned long long _type;
	NSSet* _usedLocationNodes;
	unsigned long long _lineBreakBehavior;
	NSString* _locationName;

}

@property (nonatomic,retain) NSString * locationName;                 //@synthesize locationName=_locationName - In the implementation block
@property (readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (readonly) BOOL filterLocations;                            //@synthesize filterLocations=_filterLocations - In the implementation block
@property (assign) unsigned long long lineBreakBehavior;              //@synthesize lineBreakBehavior=_lineBreakBehavior - In the implementation block
@property (retain) NSSet * usedLocationNodes;                         //@synthesize usedLocationNodes=_usedLocationNodes - In the implementation block
+(id)argumentWithLocationType:(unsigned long long)arg1 filterLocations:(BOOL)arg2 ;
+(id)argumentWithLocationTypeLocationForLocationName:(id)arg1 ;
-(void)setLocationName:(NSString *)arg1 ;
-(unsigned long long)type;
-(NSString *)locationName;
-(id)_resolvedStringWithMomentNodes:(id)arg1 ;
-(id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2 ;
-(id)initWithLocationType:(unsigned long long)arg1 filterLocations:(BOOL)arg2 ;
-(id)_generateBusinessItemTitleWithMomentNodes:(id)arg1 ;
-(id)_generateLocationTitleWithOptions:(id)arg1 ;
-(BOOL)filterLocations;
-(NSSet *)usedLocationNodes;
-(void)setUsedLocationNodes:(NSSet *)arg1 ;
-(unsigned long long)lineBreakBehavior;
-(void)setLineBreakBehavior:(unsigned long long)arg1 ;
@end

