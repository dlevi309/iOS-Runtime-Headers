/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBWallpaperObserver.h>

@class NSMutableSet, NSString;

@interface SBWallpaperEffectSnapshotCache : NSObject <SBWallpaperObserver> {

	NSMutableSet* _mappedImageKeys;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)wallpaperWillChangeForVariant:(long long)arg1 ;
-(id)snapshotForKey:(id)arg1 withGenerationBlockIfNecessary:(/*^block*/id)arg2 ;
@end

