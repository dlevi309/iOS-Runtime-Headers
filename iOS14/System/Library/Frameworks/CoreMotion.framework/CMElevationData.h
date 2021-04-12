/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/SRSampling.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate, NSString;

@interface CMElevationData : NSObject <SRSampling, NSSecureCoding, NSCopying> {

	unsigned long long fRecordId;
	NSUUID* fSourceId;
	NSDate* fStartDate;
	NSDate* fEndDate;
	unsigned long long fElevationAscended;
	unsigned long long fElevationDescended;
	long long fSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) long long source; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long elevationAscended; 
@property (nonatomic,readonly) unsigned long long elevationDescended; 
+(BOOL)supportsSecureCoding;
+(id)sourceName:(long long)arg1 ;
-(NSDate *)endDate;
-(unsigned long long)recordId;
-(NSUUID *)sourceId;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSignificantElevationSample:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 elevationAscended:(unsigned long long)arg3 elevationDescended:(unsigned long long)arg4 source:(long long)arg5 recordId:(unsigned long long)arg6 sourceId:(id)arg7 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(unsigned long long)elevationAscended;
-(unsigned long long)elevationDescended;
-(void)dealloc;
-(long long)source;
@end

