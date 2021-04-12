/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/

#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface ENRegionHistory : NSObject <NSSecureCoding> {

	NSMutableArray* _regionHistory;

}

@property (nonatomic,readonly) NSMutableArray * regionHistory;              //@synthesize regionHistory=_regionHistory - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRegionVisits:(id)arg1 ;
-(id)getRegionVisits;
-(void)addRegionVisit:(id)arg1 ;
-(void)removeRegionVisit:(id)arg1 ;
-(void)removeAllRegionVisits;
-(id)getRegions;
-(NSMutableArray *)regionHistory;
@end

