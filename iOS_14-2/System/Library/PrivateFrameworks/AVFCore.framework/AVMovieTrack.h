/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetTrack.h>

@class AVMovieTrackInternal;

@interface AVMovieTrack : AVAssetTrack {

	AVMovieTrackInternal* _movieTrackInternal;

}

@property (nonatomic,readonly) SCD_Struct_AV7 mediaPresentationTimeRange; 
@property (nonatomic,readonly) SCD_Struct_AV7 mediaDecodeTimeRange; 
@property (nonatomic,readonly) long long alternateGroupID; 
+(BOOL)expectsPropertyRevisedNotifications;
-(id)mediaDataStorage;
-(long long)alternateGroupID;
-(SCD_Struct_AV7)mediaDecodeTimeRange;
-(id)description;
-(SCD_Struct_AV7)mediaPresentationTimeRange;
@end

