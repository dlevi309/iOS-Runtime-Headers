/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface ANAnnouncementContent : NSObject <NSSecureCoding> {

	NSURL* _audioFileURL;
	NSString* _transcription;

}

@property (nonatomic,retain) NSURL * audioFileURL;                  //@synthesize audioFileURL=_audioFileURL - In the implementation block
@property (nonatomic,retain) NSString * transcription;              //@synthesize transcription=_transcription - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contentWithAudioFileURL:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setAudioFileURL:(NSURL *)arg1 ;
-(NSURL *)audioFileURL;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)transcription;
-(void)setTranscription:(NSString *)arg1 ;
@end

