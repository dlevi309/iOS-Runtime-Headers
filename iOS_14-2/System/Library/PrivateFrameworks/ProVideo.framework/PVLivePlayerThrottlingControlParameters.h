/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface PVLivePlayerThrottlingControlParameters : NSObject <NSCopying> {

	NSNumber* _renderLinkRate;
	NSNumber* _playerQueueSize;
	NSNumber* _playerBypassRenderLink;

}

@property (nonatomic,retain) NSNumber * renderLinkRate;                      //@synthesize renderLinkRate=_renderLinkRate - In the implementation block
@property (nonatomic,retain) NSNumber * playerQueueSize;                     //@synthesize playerQueueSize=_playerQueueSize - In the implementation block
@property (nonatomic,retain) NSNumber * playerBypassRenderLink;              //@synthesize playerBypassRenderLink=_playerBypassRenderLink - In the implementation block
+(id)CreateControllerParameters:(id)arg1 :(id)arg2 :(id)arg3 ;
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)renderLinkRate;
-(NSNumber *)playerQueueSize;
-(NSNumber *)playerBypassRenderLink;
-(void)setRenderLinkRate:(NSNumber *)arg1 ;
-(void)setPlayerQueueSize:(NSNumber *)arg1 ;
-(void)setPlayerBypassRenderLink:(NSNumber *)arg1 ;
-(BOOL)hasNilParameter;
-(void)updateNilsFrom:(id)arg1 ;
@end

