/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)channelCount;
-(id)initWithLayout:(const AudioChannelLayout*)arg1 ;
-(id)init;
-(unsigned long long)layoutSize;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)layoutTag;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLayoutTag:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(const AudioChannelLayout*)layout;
@end

