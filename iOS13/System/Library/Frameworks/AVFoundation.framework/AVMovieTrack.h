/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrack.h>

@class AVMovieTrackInternal;

@interface AVMovieTrack : AVAssetTrack {

	AVMovieTrackInternal* _movieTrackInternal;

}

@property (nonatomic,readonly) SCD_Struct_AV8 mediaPresentationTimeRange; 
@property (nonatomic,readonly) SCD_Struct_AV8 mediaDecodeTimeRange; 
@property (nonatomic,readonly) long long alternateGroupID; 
+(BOOL)expectsPropertyRevisedNotifications;
-(id)description;
-(SCD_Struct_AV8)mediaPresentationTimeRange;
-(SCD_Struct_AV8)mediaDecodeTimeRange;
-(long long)alternateGroupID;
-(id)mediaDataStorage;
@end

