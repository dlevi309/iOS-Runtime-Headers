/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)itemIdentifier;
-(MPMediaItem *)item;
-(id)initWithItemIdentifier:(id)arg1 item:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

