/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureRecordingSettings.h>

@class NSDictionary, NSArray;

@interface FigCaptureAudioFileRecordingSettings : FigCaptureRecordingSettings {

	NSDictionary* _audioSettings;
	NSArray* _metadata;

}

@property (nonatomic,copy) NSDictionary * audioSettings;              //@synthesize audioSettings=_audioSettings - In the implementation block
@property (nonatomic,copy) NSArray * metadata;                        //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)audioSettings;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)metadata;
-(void)setAudioSettings:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

