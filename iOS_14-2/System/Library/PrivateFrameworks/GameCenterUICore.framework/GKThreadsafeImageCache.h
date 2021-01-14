/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
*/

#import <GameCenterFoundation/GKThreadsafeCache.h>
#import <libobjc.A.dylib/GKScreenConfigurationListener.h>

@class NSString;

@interface GKThreadsafeImageCache : GKThreadsafeCache <GKScreenConfigurationListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applicationDidEnterBackground:(id)arg1 ;
-(id)initWithName:(id)arg1 maxCount:(unsigned long long)arg2 ;
-(void)greatestScreenScaleDidChange:(double)arg1 ;
@end

