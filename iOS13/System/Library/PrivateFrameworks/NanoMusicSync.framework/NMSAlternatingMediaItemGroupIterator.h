/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <NanoMusicSync/NMSMediaItemGroupIterator.h>

@interface NMSAlternatingMediaItemGroupIterator : NMSMediaItemGroupIterator {

	unsigned long long _maxItemListSize;

}
-(unsigned long long)iteratingOrder;
-(void)resetToIterateOverQuotaIdentifiers;
-(void)_generateItemListAndSizesDictIfNecessary;
-(void)_continueToNextIdentifier;
-(void)_resetMaxItemListSize;
@end

