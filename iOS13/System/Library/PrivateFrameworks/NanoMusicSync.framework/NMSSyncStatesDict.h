/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <NanoMusicSync/NanoMusicSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface NMSSyncStatesDict : NSObject <NSCopying> {

	NSMutableDictionary* _syncStatesDict;
	NSMutableDictionary* _waitingSubstatesDict;

}
+(id)assetTypeForMediaType:(unsigned long long)arg1 ;
+(unsigned long long)mediaTypeForAssetType:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWaitingSubstate:(unsigned long long)arg1 forMediaType:(unsigned long long)arg2 ;
-(void)setSyncState:(unsigned long long)arg1 forMediaType:(unsigned long long)arg2 ;
-(void)setSyncStateForAllMediaTypes:(unsigned long long)arg1 ;
-(void)setWaitingSubstateForAllMediaTypes:(unsigned long long)arg1 ;
-(unsigned long long)syncStateForMediaType:(unsigned long long)arg1 ;
-(unsigned long long)waitingSubstateForMediaType:(unsigned long long)arg1 ;
-(id)syncStateDictionaryRepresentation;
-(id)waitingSubstateDictionaryRepresentation;
@end

