/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMusicPlayerQueueDescriptor.h>

@class MPRadioStation;

@interface MPMusicPlayerRadioStationQueueDescriptor : MPMusicPlayerQueueDescriptor {

	MPRadioStation* _radioStation;

}

@property (nonatomic,readonly) MPRadioStation * radioStation;              //@synthesize radioStation=_radioStation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithRadioStation:(id)arg1 ;
-(MPRadioStation *)radioStation;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

