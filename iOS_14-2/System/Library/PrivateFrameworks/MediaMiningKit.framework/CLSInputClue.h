/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSClue.h>

@interface CLSInputClue : CLSClue {

	BOOL _needsPreparation;

}

@property (assign) BOOL needsPreparation;              //@synthesize needsPreparation=_needsPreparation - In the implementation block
-(id)init;
-(void)prepareIfNeeded;
-(void)_prepareWithProgressBlock:(/*^block*/id)arg1 ;
-(BOOL)needsPreparation;
-(void)setNeedsPreparation:(BOOL)arg1 ;
@end

