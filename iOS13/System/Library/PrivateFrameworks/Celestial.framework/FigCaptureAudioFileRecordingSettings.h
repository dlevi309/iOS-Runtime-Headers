/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureRecordingSettings.h>

@class NSDictionary, NSArray;

@interface FigCaptureAudioFileRecordingSettings : FigCaptureRecordingSettings {

	NSDictionary* _audioSettings;
	NSArray* _metadata;

}

@property (nonatomic,copy) NSDictionary * audioSettings;              //@synthesize audioSettings=_audioSettings - In the implementation block
@property (nonatomic,copy) NSArray * metadata;                        //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSArray *)metadata;
-(NSDictionary *)audioSettings;
-(void)setAudioSettings:(NSDictionary *)arg1 ;
@end

