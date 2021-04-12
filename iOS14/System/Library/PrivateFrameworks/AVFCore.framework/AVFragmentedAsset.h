/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVURLAsset.h>
#import <AVFCore/AVFragmentMinding.h>

@class AVFragmentedAssetInternal, NSArray;

@interface AVFragmentedAsset : AVURLAsset <AVFragmentMinding> {

	AVFragmentedAssetInternal* _fragmentedAsset;

}

@property (nonatomic,readonly) NSArray * tracks; 
@property (getter=isAssociatedWithFragmentMinder,nonatomic,readonly) BOOL associatedWithFragmentMinder; 
+(id)fragmentedAssetWithURL:(id)arg1 options:(id)arg2 ;
+(BOOL)expectsPropertyRevisedNotifications;
-(NSArray *)tracks;
-(id)trackWithTrackID:(int)arg1 ;
-(BOOL)_mindsFragments;
-(id)tracksWithMediaType:(id)arg1 ;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(Class)_classForAssetTracks;
-(BOOL)isAssociatedWithFragmentMinder;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
@end

