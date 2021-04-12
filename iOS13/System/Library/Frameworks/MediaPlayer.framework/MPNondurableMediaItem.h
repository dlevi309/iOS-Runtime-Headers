/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPMediaItem.h>

@interface MPNondurableMediaItem : MPMediaItem {

	unsigned long long _persistentID;

}
+(BOOL)supportsSecureCoding;
+(BOOL)canFilterByProperty:(id)arg1 ;
+(id)defaultPropertyValues;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)persistentID;
-(id)valueForProperty:(id)arg1 ;
-(void)incrementPlayCount;
-(id)mediaLibrary;
-(id)initWithPersistentID:(unsigned long long)arg1 ;
-(BOOL)existsInLibrary;
-(id)valuesForProperties:(id)arg1 ;
-(BOOL)didSkipWithPlayedToTime:(double)arg1 ;
-(void)markNominalAmountHasBeenPlayed;
-(void)noteWasPlayedToTime:(double)arg1 skipped:(BOOL)arg2 ;
-(void)incrementSkipCount;
-(void)incrementPlayCountForPlayingToEnd;
-(BOOL)incrementPlayCountForStopTime:(double)arg1 ;
-(void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(/*^block*/id)arg1 ;
-(double)nominalHasBeenPlayedThreshold;
-(BOOL)isUsableAsRepresentativeItem;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

