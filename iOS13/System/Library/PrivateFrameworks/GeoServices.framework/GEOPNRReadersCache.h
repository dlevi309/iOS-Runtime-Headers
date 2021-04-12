/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, GEOPNRCCTrieReader, GEOPNRAccessTrieReader, NSObject;

@interface GEOPNRReadersCache : NSObject {

	NSMutableDictionary* _phNoTries;
	NSMutableDictionary* _stringsFiles;
	GEOPNRCCTrieReader* _ccTrie;
	GEOPNRAccessTrieReader* _accessTrie;
	NSObject*<OS_dispatch_queue> _cacheQueue;

}
+(id)sharedCache;
-(id)init;
-(id)stringsReaderForCC:(id)arg1 ;
-(id)phoneNumReaderForCC:(id)arg1 ;
-(id)accessReader;
-(id)ccReader;
-(void)_cleanupOldCacheFiles;
-(id)uncompressedFilePathForCC:(id)arg1 zippedFileExtension:(id)arg2 fileExtension:(id)arg3 ;
@end

