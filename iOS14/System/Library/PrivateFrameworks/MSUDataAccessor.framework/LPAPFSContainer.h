/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MSUDataAccessor.framework/MSUDataAccessor
*/

#import <MSUDataAccessor/LPMedia.h>

@interface LPAPFSContainer : LPMedia
+(id)supportedContentTypes;
+(id)allAPFSContainers;
+(id)diagsContainer;
-(id)volumes;
-(id)volumesWithRole:(int)arg1 ;
-(id)physicalStores;
-(id)prebootVolume;
-(id)addVolumeWithName:(id)arg1 role:(int)arg2 caseSensitive:(BOOL)arg3 reserveSize:(long long)arg4 quotaSize:(long long)arg5 pairedVolume:(id)arg6 error:(id*)arg7 ;
-(id)recoveryVolume;
-(id)updateVolume;
@end

