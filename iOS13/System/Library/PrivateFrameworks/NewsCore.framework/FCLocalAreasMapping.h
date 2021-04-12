/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSDictionary, NSArray;

@interface FCLocalAreasMapping : NSObject <NSSecureCoding, NSCopying> {

	NSData* _data;
	NSDictionary* _regionMap;
	NSArray* _areas;

}

@property (nonatomic,retain) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDictionary * regionMap;                //@synthesize regionMap=_regionMap - In the implementation block
@property (nonatomic,retain) NSArray * areas;                         //@synthesize areas=_areas - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSArray *)areas;
-(NSDictionary *)regionMap;
-(id)regionsForLocation:(id)arg1 ;
-(void)setRegionMap:(NSDictionary *)arg1 ;
-(void)setAreas:(NSArray *)arg1 ;
@end

