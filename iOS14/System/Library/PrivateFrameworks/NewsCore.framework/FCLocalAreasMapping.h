/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCLocalAreasProvider.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSDictionary, NSArray, NSString;

@interface FCLocalAreasMapping : NSObject <FCLocalAreasProvider, NSSecureCoding, NSCopying> {

	NSData* _data;
	NSDictionary* _regionMap;
	NSArray* _areas;

}

@property (nonatomic,retain) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDictionary * regionMap;                //@synthesize regionMap=_regionMap - In the implementation block
@property (nonatomic,retain) NSArray * areas;                         //@synthesize areas=_areas - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSArray *)areas;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithData:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(NSDictionary *)regionMap;
-(id)initWithCoder:(id)arg1 ;
-(id)regionsForLocation:(id)arg1 ;
-(id)filterOuterRegions:(id)arg1 ;
-(void)setRegionMap:(NSDictionary *)arg1 ;
-(id)autoFavoriteTagIDsForLocation:(id)arg1 ;
-(void)setAreas:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

