/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(id)initWithModel:(id)arg1 ;
@end

