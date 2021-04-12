/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/MBClipsLoader.h>
#import <libobjc.A.dylib/PHAssetRepresentationDownloadObserver.h>

@class NSSet, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MBDownloadClipsLoader : MBClipsLoader <PHAssetRepresentationDownloadObserver> {

	NSSet* _assetURLs;
	NSSet* _insertedAssetURLs;
	NSMutableDictionary* _identifierURLsToClipsMap;
	NSRecursiveLock* _updateLock;

}

@property (nonatomic,retain) NSSet * assetURLs;                                 //@synthesize assetURLs=_assetURLs - In the implementation block
@property (nonatomic,retain) NSSet * insertedAssetURLs;                         //@synthesize insertedAssetURLs=_insertedAssetURLs - In the implementation block
@property (retain) NSMutableDictionary * identifierURLsToClipsMap;              //@synthesize identifierURLsToClipsMap=_identifierURLsToClipsMap - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * updateLock;                      //@synthesize updateLock=_updateLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)load;
-(NSRecursiveLock *)updateLock;
-(void)setIdentifierURLsToClipsMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)identifierURLsToClipsMap;
-(NSSet *)assetURLs;
-(void)setAssetURLs:(NSSet *)arg1 ;
-(void)downloadStateOfAssetRepresentationDidChange:(id)arg1 previousState:(unsigned long long)arg2 currentState:(unsigned long long)arg3 ;
-(void)setInsertedAssetURLs:(NSSet *)arg1 ;
-(id)fetchAssetURLs;
-(NSSet *)insertedAssetURLs;
-(void)loadClipsFromURLs:(id)arg1 ;
-(void)setUpdateLock:(NSRecursiveLock *)arg1 ;
@end

