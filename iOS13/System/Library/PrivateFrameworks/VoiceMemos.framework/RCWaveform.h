/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) SCD_Struct_RC3 timeRange; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)waveformURLForAVURL:(id)arg1 ;
+(id)_mutableSegmentsByClippingToTimeRange:(SCD_Struct_RC3)arg1 withSegments:(id)arg2 ;
+(id)_mutableSegmentsIntersectingTimeRange:(SCD_Struct_RC3)arg1 intersectionRange:(NSRange*)arg2 withSegments:(id)arg3 ;
+(void)_mergeBoundarySegmentsInArray:(id)arg1 ;
+(NSRange)rangeOfSegmentsIntersectingTimeRange:(SCD_Struct_RC3)arg1 withSegments:(id)arg2 ;
+(id)waveformWithContentsOfURL:(id)arg1 minimumRequiredVersion:(unsigned long long)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)segments;
-(void)setSegments:(NSArray *)arg1 ;
-(SCD_Struct_RC3)timeRange;
-(unsigned long long)segmentCount;
-(id)initWithSegments:(id)arg1 ;
-(NSArray *)segmentsCopy;
-(BOOL)hasUniformPowerLevel:(float)arg1 ;
-(id)segmentsByClippingToTimeRange:(SCD_Struct_RC3)arg1 ;
-(id)segmentsIntersectingTimeRange:(SCD_Struct_RC3)arg1 ;
-(unsigned long long)averagePowerLevelsRate;
-(BOOL)saveContentsToURL:(id)arg1 ;
-(BOOL)isWaveformDataEqualToDataInWaveform:(id)arg1 ;
@end

