/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/


@class NSArray, NSMutableArray, NSString, _QLCacheThread;

@interface QLCacheFragHandler : NSObject {

	unsigned long long _totalLen;
	unsigned long long _holesLen;
	NSArray* _sizeRanks;
	NSMutableArray* _orderedByStart;
	NSString* _path;
	BOOL _isDirty;
	BOOL _needsCompact;
	_QLCacheThread* _cacheThread;

}

@property (__weak) _QLCacheThread * cacheThread;              //@synthesize cacheThread=_cacheThread - In the implementation block
+(void)initialize;
-(void)clear;
-(BOOL)isDirty;
-(float)frag;
-(BOOL)save;
-(void)compact;
-(id)lastHole;
-(unsigned long long)totalLen;
-(void)_insertHoleInRanks:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 cacheThread:(id)arg2 ;
-(id)initWithHolePositions:(id)arg1 holeLengths:(id)arg2 totalLength:(long long)arg3 holesLength:(long long)arg4 cacheThread:(id)arg5 ;
-(void)assertSpaceIsRetainedAtPos:(unsigned long long)arg1 withLen:(unsigned long long)arg2 ;
-(BOOL)checkHolesLenConsistency;
-(void)_removeHoleFromRanks:(id)arg1 ;
-(void)truncateFromPosition:(unsigned long long)arg1 ;
-(id)dataToSave;
-(id)initWithFilePath:(id)arg1 cacheThread:(id)arg2 ;
-(id)initWithCacheThread:(id)arg1 ;
-(unsigned long long)allocateSpaceForLength:(unsigned long long)arg1 added:(BOOL*)arg2 ;
-(void)releaseSpaceAtPos:(unsigned long long)arg1 withLen:(unsigned long long)arg2 ;
-(BOOL)canFindHoleForLen:(unsigned long long)arg1 ;
-(void)truncateUselessSpaceAtEndOfFile;
-(BOOL)checkConsistency;
-(id)orderedByStart;
-(_QLCacheThread *)cacheThread;
-(void)setCacheThread:(_QLCacheThread *)arg1 ;
@end

