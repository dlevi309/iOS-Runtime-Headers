/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPFuture.h>

@class NSMapTable;

@interface MPInvalidationFuture : MPFuture {

	NSMapTable* _invalidationBlocks;
	BOOL _invalid;

}

@property (getter=isInvalid,nonatomic,readonly) BOOL invalid;              //@synthesize invalid=_invalid - In the implementation block
-(void)invalidate;
-(BOOL)isInvalid;
-(id)onInvalid:(/*^block*/id)arg1 ;
-(id)onInvalid:(/*^block*/id)arg1 queue:(id)arg2 ;
@end

