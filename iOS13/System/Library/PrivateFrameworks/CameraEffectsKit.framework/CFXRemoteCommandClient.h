/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class NSDistributedNotificationCenter;

@interface CFXRemoteCommandClient : NSObject {

	NSDistributedNotificationCenter* _distributedNotificationCenter;

}

@property (nonatomic,retain) NSDistributedNotificationCenter * distributedNotificationCenter;              //@synthesize distributedNotificationCenter=_distributedNotificationCenter - In the implementation block
-(id)init;
-(NSDistributedNotificationCenter *)distributedNotificationCenter;
-(void)setDistributedNotificationCenter:(NSDistributedNotificationCenter *)arg1 ;
-(void)addShapeWithEffectIdentifier:(id)arg1 ;
-(void)addStickerWithURL:(id)arg1 offset:(CGPoint)arg2 scale:(double)arg3 rotation:(double)arg4 ;
-(void)addTextWithEffectIdentifier:(id)arg1 string:(id)arg2 ;
-(void)removeEffectsWithEffectTypeIdentifiers:(id)arg1 ;
-(void)setAnimojiWithEffectIdentifier:(id)arg1 ;
-(void)setFilterWithEffectIdentifier:(id)arg1 ;
@end

