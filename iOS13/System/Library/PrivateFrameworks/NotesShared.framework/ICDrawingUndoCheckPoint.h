/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


#import <NotesShared/NotesShared-Structs.h>
@class NSOrderedSet, NSUUID, NSString;

@interface ICDrawingUndoCheckPoint : NSObject {

	CGImageRef _image;
	NSOrderedSet* _renderedCommands;
	NSUUID* _uuid;
	NSString* _cacheFilename;
	BOOL _isEraseAllCheckPoint;

}

@property (assign,nonatomic) CGImageRef image;                               //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * cacheFilename;                     //@synthesize cacheFilename=_cacheFilename - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * renderedCommands;              //@synthesize renderedCommands=_renderedCommands - In the implementation block
@property (nonatomic,readonly) BOOL isEraseAllCheckPoint;                    //@synthesize isEraseAllCheckPoint=_isEraseAllCheckPoint - In the implementation block
+(unsigned long long)cacheSize;
+(id)cacheDirectory;
+(void)deleteAllCacheFiles;
-(void)dealloc;
-(NSUUID *)uuid;
-(CGImageRef)image;
-(void)setImage:(CGImageRef)arg1 ;
-(BOOL)isInMemory;
-(NSString *)cacheFilename;
-(void)reloadImage;
-(id)initWithImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 renderedCommands:(id)arg3 ;
-(NSOrderedSet *)renderedCommands;
-(void)writeToDiskAndFreeMemory;
-(BOOL)isEraseAllCheckPoint;
-(CGImageRef)retainedImage;
-(BOOL)ensureCacheDirectoryExists;
-(void)flushFromMemoryIfPossible;
@end

