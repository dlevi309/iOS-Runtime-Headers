/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAsset.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVMovieInternal, NSURL, NSData, AVMediaDataStorage, NSArray;

@interface AVMovie : AVAsset <NSCopying, NSMutableCopying> {

	AVMovieInternal* _movie;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) AVMediaDataStorage * defaultMediaDataStorage; 
@property (nonatomic,readonly) NSArray * tracks; 
@property (nonatomic,readonly) BOOL canContainMovieFragments; 
@property (nonatomic,readonly) BOOL containsMovieFragments; 
+(void)initialize;
+(id)movieTypes;
+(id)movieWithURL:(id)arg1 options:(id)arg2 ;
+(id)movieWithData:(id)arg1 options:(id)arg2 ;
+(BOOL)expectsPropertyRevisedNotifications;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)trackReferences;
-(BOOL)hasProtectedContent;
-(id)init;
-(NSArray *)tracks;
-(Class)_classForMovieTracks;
-(OpaqueFigMutableMovieRef)_figMutableMovie;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(NSData *)data;
-(id)trackWithTrackID:(int)arg1 ;
-(void)_startListeningToLoaderNotifications;
-(void)_stopListeningToLoaderNotifications;
-(id)_initWithFormatReader:(OpaqueFigFormatReaderRef)arg1 URL:(id)arg2 data:(id)arg3 options:(id)arg4 ;
-(id)_initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(id)_initWithFigError:(int)arg1 userInfo:(id)arg2 ;
-(OpaqueFigMutableMovieRef)_figMutableMovieFromFormatReader:(OpaqueFigFormatReaderRef)arg1 ;
-(AVMediaDataStorage *)defaultMediaDataStorage;
-(BOOL)canContainMovieFragments;
-(BOOL)containsMovieFragments;
-(OpaqueFigMutableMovieRef)_mutableMovieForFileType:(id)arg1 ;
-(id)movieHeaderWithFileType:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeMovieHeaderToURL:(id)arg1 fileType:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)isCompatibleWithFileType:(id)arg1 ;
-(id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3 ;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(id)tracksWithMediaType:(id)arg1 ;
-(NSURL *)URL;
-(id)_absoluteURL;
-(unsigned long long)referenceRestrictions;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(id)_initializationOptions;
-(Class)_classForTrackInspectors;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

