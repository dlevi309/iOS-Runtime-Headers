/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPMediaLibrary, MPModelObject;

@interface MPModelLibraryIncrementSkipCountChangeRequest : NSObject {

	MPMediaLibrary* _mediaLibrary;
	MPModelObject* _model;

}

@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,readonly) MPModelObject * model;                    //@synthesize model=_model - In the implementation block
-(MPModelObject *)model;
-(id)initWithModel:(id)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
@end

