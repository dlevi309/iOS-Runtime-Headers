/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <NanoMusicSync/NMSMediaItemGroupIterator.h>

@interface NMSAlternatingMediaItemGroupIterator : NMSMediaItemGroupIterator {

	unsigned long long _maxItemListSize;

}
-(unsigned long long)iteratingOrder;
-(void)markAllRemainingContainersAsSkipped;
-(void)resetToIterateOverQuotaIdentifiers;
-(void)_generateItemListAndSizesDictIfNecessary;
-(void)_continueToNextIdentifier;
-(void)_continueToNextContainer;
-(void)_resetMaxItemListSize;
@end

