/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVURLAsset.h>
#import <AVFoundation/AVFragmentMinding.h>

@class AVFragmentedAssetInternal, NSArray;

@interface AVFragmentedAsset : AVURLAsset <AVFragmentMinding> {

	AVFragmentedAssetInternal* _fragmentedAsset;

}

@property (nonatomic,readonly) NSArray * tracks; 
@property (getter=isAssociatedWithFragmentMinder,nonatomic,readonly) BOOL associatedWithFragmentMinder; 
+(id)fragmentedAssetWithURL:(id)arg1 options:(id)arg2 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(id)tracksWithMediaType:(id)arg1 ;
-(NSArray *)tracks;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(BOOL)_mindsFragments;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
-(id)trackWithTrackID:(int)arg1 ;
-(Class)_classForAssetTracks;
-(BOOL)isAssociatedWithFragmentMinder;
@end

