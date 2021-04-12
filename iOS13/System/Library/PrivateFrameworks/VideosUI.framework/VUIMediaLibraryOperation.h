/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@class VUIMediaLibrary, NSError, VUIAsynchronousWorkToken;

@interface VUIMediaLibraryOperation : VUIAsynchronousOperation {

	VUIMediaLibrary* _mediaLibrary;
	NSError* _error;
	VUIAsynchronousWorkToken* _asyncWorkToken;

}

@property (nonatomic,retain) VUIMediaLibrary * mediaLibrary;                         //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,copy) NSError * error;                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) VUIAsynchronousWorkToken * asyncWorkToken;              //@synthesize asyncWorkToken=_asyncWorkToken - In the implementation block
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(VUIMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(VUIMediaLibrary *)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 ;
-(void)setAsyncWorkToken:(VUIAsynchronousWorkToken *)arg1 ;
-(VUIAsynchronousWorkToken *)asyncWorkToken;
@end

