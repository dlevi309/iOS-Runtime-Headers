/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setMediaLibrary:(VUIMediaLibrary *)arg1 ;
-(VUIMediaLibrary *)mediaLibrary;
-(void)cancel;
-(id)initWithMediaLibrary:(id)arg1 ;
-(void)setAsyncWorkToken:(VUIAsynchronousWorkToken *)arg1 ;
-(VUIAsynchronousWorkToken *)asyncWorkToken;
@end

