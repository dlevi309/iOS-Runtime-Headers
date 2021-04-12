/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate;

@interface CMSwimData : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long fRecordId;
	NSUUID* fSourceId;
	NSUUID* fSessionId;
	NSDate* fStartDate;
	NSDate* fEndDate;
	unsigned long long fStrokeCount;
	double fDistance;
	double fAvgPace;
	unsigned long long fLapCount;
	long long fStrokeType;
	unsigned long long fSegment;

}

@property (nonatomic,readonly) unsigned long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) NSUUID * sessionId; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long strokeCount; 
@property (nonatomic,readonly) double distance; 
@property (nonatomic,readonly) double avgPace; 
@property (nonatomic,readonly) unsigned long long lapCount; 
@property (nonatomic,readonly) long long strokeType; 
@property (nonatomic,readonly) unsigned long long segment; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)maxSwimDataEntries;
+(id)strokeTypeName:(long long)arg1 ;
-(NSUUID *)sessionId;
-(NSDate *)endDate;
-(unsigned long long)recordId;
-(NSUUID *)sourceId;
-(unsigned long long)segment;
-(double)distance;
-(NSDate *)startDate;
-(id)initWithSessionId:(id)arg1 ;
-(unsigned long long)lapCount;
-(void)encodeWithCoder:(id)arg1 ;
-(double)avgPace;
-(id)description;
-(long long)strokeType;
-(unsigned long long)strokeCount;
-(id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 sessionId:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 strokeCount:(unsigned long long)arg6 distance:(double)arg7 avgPace:(double)arg8 lapCount:(unsigned long long)arg9 strokeType:(long long)arg10 segment:(unsigned long long)arg11 ;
-(void)convertToSwimEntry:(CLSwimEntry*)arg1 ;
-(id)initWithSwimEntry:(const CLSwimEntry*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

