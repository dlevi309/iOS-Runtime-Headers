/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <libobjc.A.dylib/MDLAssetResolver.h>

@class NSURL, NSMutableDictionary, NSString, NSData;

@interface MDLArchiveAssetResolver : NSObject <MDLAssetResolver> {

	NSURL* _archiveURL;
	NSMutableDictionary* _archiveDictionary;
	NSString* _rootUSDPath;
	NSData* _data;

}

@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(id)resolveAssetNamed:(id)arg1 ;
-(BOOL)canResolveAssetNamed:(id)arg1 ;
-(void)addResolvedAssetNamed:(id)arg1 offset:(unsigned long long)arg2 fileSize:(unsigned long long)arg3 ;
-(id)resolveInsideArchiveWithAssetNamed:(id)arg1 ;
-(id)assetNamesInArchive;
-(void)removeAssetNamed:(id)arg1 ;
@end

