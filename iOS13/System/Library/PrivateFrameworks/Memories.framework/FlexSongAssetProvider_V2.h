/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <libobjc.A.dylib/FlexSongAssetProviderProtocol.h>

@class NSString;

@interface FlexSongAssetProvider_V2 : NSObject <FlexSongAssetProviderProtocol> {

	NSString* _rootFolderPath;
	NSString* _audioFileExtension;

}

@property (nonatomic,retain) NSString * rootFolderPath;                  //@synthesize rootFolderPath=_rootFolderPath - In the implementation block
@property (nonatomic,retain) NSString * audioFileExtension;              //@synthesize audioFileExtension=_audioFileExtension - In the implementation block
-(NSString *)audioFileExtension;
-(void)setAudioFileExtension:(NSString *)arg1 ;
-(NSString *)rootFolderPath;
-(id)urlToRoot;
-(id)urlToAudioContainerForSegmentType:(unsigned long long)arg1 ;
-(id)urlToAudioForSegment:(id)arg1 ;
-(void)setRootFolderPath:(NSString *)arg1 ;
-(id)_folderNameForSegmentType:(unsigned long long)arg1 ;
-(id)initWithFolderPath:(id)arg1 audioFileExtension:(id)arg2 ;
-(BOOL)assetsAreLocal;
@end

