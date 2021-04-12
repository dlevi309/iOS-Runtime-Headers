/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, NSNumber;

@interface CMSignificantElevationSample : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long fRecordId;
	NSUUID* fSourceId;
	NSDate* fStartDate;
	NSDate* fEndDate;
	NSNumber* fElevationAscended;
	NSNumber* fElevationDescended;

}

@property (nonatomic,readonly) unsigned long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSNumber * elevationAscended; 
@property (nonatomic,readonly) NSNumber * elevationDescended; 
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(unsigned long long)recordId;
-(NSUUID *)sourceId;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)elevationAscended;
-(id)initWithSignificantElevation:(const CLSignificantElevation*)arg1 ;
-(id)initWithFilteredElevation:(const CLElevationChangeEntry*)arg1 ;
-(id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 elevationAscended:(id)arg5 elevationDescended:(id)arg6 ;
-(NSNumber *)elevationDescended;
-(void)dealloc;
@end

