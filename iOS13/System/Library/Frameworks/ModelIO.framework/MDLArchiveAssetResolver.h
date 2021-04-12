/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <libobjc.A.dylib/MDLAssetResolver.h>

@class NSURL, NSMutableDictionary, NSString;

@interface MDLArchiveAssetResolver : NSObject <MDLAssetResolver> {

	NSURL* _archiveURL;
	NSMutableDictionary* _archiveDictionary;
	NSString* _rootUSDPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(id)resolveAssetNamed:(id)arg1 ;
-(BOOL)canResolveAssetNamed:(id)arg1 ;
-(void)addResolvedAssetNamed:(id)arg1 offset:(unsigned long long)arg2 fileSize:(unsigned long long)arg3 ;
-(id)resolveInsideArchiveWithAssetNamed:(id)arg1 ;
-(id)assetNamesInArchive;
-(void)removeAssetNamed:(id)arg1 ;
@end

