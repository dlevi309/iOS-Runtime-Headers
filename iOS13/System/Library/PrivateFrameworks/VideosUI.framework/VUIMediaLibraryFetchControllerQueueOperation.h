/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray;

@interface VUIMediaLibraryFetchControllerQueueOperation : VUIAsynchronousOperation {

	NSArray* _fetchControllers;
	unsigned long long _mediaLibraryRevision;

}

@property (nonatomic,copy) NSArray * fetchControllers;                             //@synthesize fetchControllers=_fetchControllers - In the implementation block
@property (assign,nonatomic) unsigned long long mediaLibraryRevision;              //@synthesize mediaLibraryRevision=_mediaLibraryRevision - In the implementation block
-(id)init;
-(void)executionDidBegin;
-(NSArray *)fetchControllers;
-(unsigned long long)mediaLibraryRevision;
-(id)initWithFetchControllers:(id)arg1 mediaLibraryRevision:(unsigned long long)arg2 ;
-(void)setFetchControllers:(NSArray *)arg1 ;
-(void)setMediaLibraryRevision:(unsigned long long)arg1 ;
@end

