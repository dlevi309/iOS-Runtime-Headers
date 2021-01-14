/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPModelRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPSectionedCollection;

@interface MPCModelRadioPersonalizationRequest : MPModelRequest <NSCopying> {

	MPSectionedCollection* _radioStationTracks;

}
+(BOOL)supportsSecureCoding;
+(BOOL)requiresNetwork;
-(id)init;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRadioStationTracks:(id)arg1 ;
@end

