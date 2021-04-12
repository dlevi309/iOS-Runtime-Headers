/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)proxyForObjects:(id)arg1 protocol:(id)arg2 ;
+(id)proxyForObject:(id)arg1 protocol:(id)arg2 ;
-(NSHashTable *)objects;
-(void)setProtocol:(Protocol *)arg1 ;
-(void)setObjects:(NSHashTable *)arg1 ;
-(Protocol *)protocol;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

