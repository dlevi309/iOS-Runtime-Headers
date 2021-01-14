/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface RCWaveform : NSObject <NSMutableCopying, NSCopying, NSSecureCoding> {

	unsigned long long _decodedVersion;
	NSArray* _segments;

}

@property (retain) NSArray * segments;                                                 //@synthesize segments=_segments - In the implementation block
@property (readonly) NSArray * segmentsCopy; 
@property (readonly) unsigned long long segmentCount; 
@property (nonatomic,readonly) unsigned long long averagePowerLevelsRate; 
@property (nonatomic,readonly) SCD_Struct_RC7 timeRange; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)waveformWithContentsOfURL:(id)arg1 minimumRequiredVersion:(unsigned long long)arg2 ;
+(void)_mergeBoundarySegmentsInArray:(id)arg1 ;
+(NSRange)rangeOfSegmentsIntersectingTimeRange:(SCD_Struct_RC7)arg1 withSegments:(id)arg2 ;
+(id)_mutableSegmentsIntersectingTimeRange:(SCD_Struct_RC7)arg1 intersectionRange:(NSRange*)arg2 withSegments:(id)arg3 ;
+(id)_mutableSegmentsByClippingToTimeRange:(SCD_Struct_RC7)arg1 withSegments:(id)arg2 ;
+(id)waveformURLForAVURL:(id)arg1 ;
-(id)init;
-(SCD_Struct_RC7)timeRange;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasUniformPowerLevel:(float)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setSegments:(NSArray *)arg1 ;
-(NSArray *)segmentsCopy;
-(id)segmentsByClippingToTimeRange:(SCD_Struct_RC7)arg1 ;
-(id)segmentsIntersectingTimeRange:(SCD_Struct_RC7)arg1 ;
-(id)initWithSegments:(id)arg1 ;
-(BOOL)saveContentsToURL:(id)arg1 ;
-(NSArray *)segments;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)averagePowerLevelsRate;
-(BOOL)isWaveformDataEqualToDataInWaveform:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)segmentCount;
@end

