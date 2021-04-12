/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSClue.h>

@interface CLSInputClue : CLSClue {

	BOOL _needsPreparation;

}

@property (assign) BOOL needsPreparation;              //@synthesize needsPreparation=_needsPreparation - In the implementation block
-(id)init;
-(void)prepareIfNeeded;
-(BOOL)needsPreparation;
-(void)setNeedsPreparation:(BOOL)arg1 ;
-(void)_prepareWithProgressBlock:(/*^block*/id)arg1 ;
@end

