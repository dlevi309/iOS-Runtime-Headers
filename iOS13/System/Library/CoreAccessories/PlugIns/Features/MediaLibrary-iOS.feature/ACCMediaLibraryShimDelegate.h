/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

