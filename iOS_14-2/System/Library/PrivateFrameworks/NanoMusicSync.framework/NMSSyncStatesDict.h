/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setWaitingSubstateForAllMediaTypes:(unsigned long long)arg1 ;
-(id)init;
-(id)syncStateDictionaryRepresentation;
-(id)description;
-(void)setSyncStateForAllMediaTypes:(unsigned long long)arg1 ;
-(unsigned long long)waitingSubstateForMediaType:(unsigned long long)arg1 ;
-(id)waitingSubstateDictionaryRepresentation;
-(void)setSyncState:(unsigned long long)arg1 forMediaType:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)syncStateForMediaType:(unsigned long long)arg1 ;
-(void)setWaitingSubstate:(unsigned long long)arg1 forMediaType:(unsigned long long)arg2 ;
@end

