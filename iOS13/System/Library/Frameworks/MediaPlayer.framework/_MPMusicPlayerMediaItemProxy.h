/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <Foundation/NSProxy.h>

@class MPMediaItem, NSString;

@interface _MPMusicPlayerMediaItemProxy : NSProxy {

	MPMediaItem* _item;
	NSString* _itemIdentifier;

}

@property (nonatomic,readonly) MPMediaItem * item;                     //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSString * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(MPMediaItem *)item;
-(NSString *)itemIdentifier;
-(id)initWithItemIdentifier:(id)arg1 item:(id)arg2 ;
@end

