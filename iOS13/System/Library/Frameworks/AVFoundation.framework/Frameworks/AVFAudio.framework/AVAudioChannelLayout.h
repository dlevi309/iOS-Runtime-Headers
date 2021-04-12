/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AVAudioChannelLayout : NSObject <NSSecureCoding> {

	unsigned _layoutTag;
	AudioChannelLayout* _layout;
	void* _reserved;

}

@property (nonatomic,readonly) unsigned layoutTag; 
@property (nonatomic,readonly) const AudioChannelLayout* layout; 
@property (nonatomic,readonly) unsigned channelCount; 
+(BOOL)supportsSecureCoding;
+(id)layoutWithLayoutTag:(unsigned)arg1 ;
+(id)layoutWithLayout:(const AudioChannelLayout*)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const AudioChannelLayout*)layout;
-(unsigned long long)layoutSize;
-(id)initWithLayout:(const AudioChannelLayout*)arg1 ;
-(unsigned)layoutTag;
-(unsigned)channelCount;
-(id)initWithLayoutTag:(unsigned)arg1 ;
@end

