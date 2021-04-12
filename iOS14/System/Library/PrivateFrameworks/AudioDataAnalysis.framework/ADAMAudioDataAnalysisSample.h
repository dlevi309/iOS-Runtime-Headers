/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioDataAnalysis.framework/AudioDataAnalysis
*/

#import <AudioDataAnalysis/AudioDataAnalysis-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSDateInterval, NSDictionary, NSUUID;

@interface ADAMAudioDataAnalysisSample : NSObject <NSSecureCoding, NSCopying> {

	unsigned type;
	NSNumber* data;
	NSDateInterval* dateInterval;
	NSDictionary* metadata;
	NSUUID* uuid;

}

@property (nonatomic,readonly) NSNumber * data; 
@property (nonatomic,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) unsigned type; 
@property (nonatomic,readonly) NSDictionary * metadata; 
@property (nonatomic,readonly) NSUUID * uuid; 
+(BOOL)supportsSecureCoding;
-(NSDateInterval *)dateInterval;
-(NSUUID *)uuid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSNumber *)data;
-(unsigned)type;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initAudioSampleWithType:(unsigned)arg1 data:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4 ;
@end

