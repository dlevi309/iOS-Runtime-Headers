/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/


#import <MOVStreamIO/MOVStreamIO-Structs.h>
@class NSDictionary;

@interface MOVStreamEncoderConfig : NSObject {

	unsigned _codecType;
	NSDictionary* _encoderSpecification;
	NSDictionary* _sessionProperties;

}

@property (assign) unsigned codecType;                               //@synthesize codecType=_codecType - In the implementation block
@property (retain) NSDictionary * encoderSpecification;              //@synthesize encoderSpecification=_encoderSpecification - In the implementation block
@property (retain) NSDictionary * sessionProperties;                 //@synthesize sessionProperties=_sessionProperties - In the implementation block
+(BOOL)isEncoderAvailableOfType:(unsigned)arg1 withId:(id)arg2 ;
+(id)encoderIdsForType:(unsigned)arg1 ;
+(id)monochrome10BitEncoderConfigUsingAVEWithBitrate:(unsigned long long)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeToFile:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)sessionProperties;
-(void)setSessionProperties:(NSDictionary *)arg1 ;
-(unsigned)codecType;
-(void)setCodecType:(unsigned)arg1 ;
-(id)initWithCodecType:(unsigned)arg1 encoderSpecification:(id)arg2 sessionProperties:(id)arg3 ;
-(NSDictionary *)encoderSpecification;
-(void)setEncoderSpecification:(NSDictionary *)arg1 ;
-(BOOL)applySessionProperties:(OpaqueVTCompressionSessionRef)arg1 ;
@end

