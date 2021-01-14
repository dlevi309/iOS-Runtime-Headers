/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/MediaLibrary-iOS.feature/MediaLibrary-iOS
*/

@class ACCMediaLibraryProvider;


@protocol ACCMediaLibraryShimDelegate <NSObject>
@property (nonatomic,readonly) ACCMediaLibraryProvider * provider; 
@required
-(ACCMediaLibraryProvider *)provider;
-(void)notify:(id)arg1 stateChange:(int)arg2 enabled:(BOOL)arg3;
-(void)notifyAvailableLibraries:(id)arg1;

@end

