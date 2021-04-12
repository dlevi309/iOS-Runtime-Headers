/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)executionDidBegin;
-(id)init;
-(NSArray *)fetchControllers;
-(unsigned long long)mediaLibraryRevision;
-(id)initWithFetchControllers:(id)arg1 mediaLibraryRevision:(unsigned long long)arg2 ;
-(void)setFetchControllers:(NSArray *)arg1 ;
-(void)setMediaLibraryRevision:(unsigned long long)arg1 ;
@end

