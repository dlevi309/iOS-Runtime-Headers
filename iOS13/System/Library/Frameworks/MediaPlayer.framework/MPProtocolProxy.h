/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <Foundation/NSProxy.h>

@class Protocol, NSHashTable;

@interface MPProtocolProxy : NSProxy {

	Protocol* _protocol;
	NSHashTable* _objects;

}

@property (nonatomic,retain) Protocol * protocol;                //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) NSHashTable * objects;              //@synthesize objects=_objects - In the implementation block
+(id)proxyForObject:(id)arg1 protocol:(id)arg2 ;
+(id)proxyForObjects:(id)arg1 protocol:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(Protocol *)protocol;
-(void)setProtocol:(Protocol *)arg1 ;
-(NSHashTable *)objects;
-(void)setObjects:(NSHashTable *)arg1 ;
@end

