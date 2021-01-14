/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPModelObject, MPMediaLibrary, MPModelKind;

@interface MPModelLibraryHasPurchasesRequest : NSObject {

	MPModelObject* _modelObject;
	MPMediaLibrary* _mediaLibrary;
	MPModelKind* _itemKind;

}

@property (nonatomic,retain) MPModelObject * modelObject;                //@synthesize modelObject=_modelObject - In the implementation block
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) MPModelKind * itemKind;                     //@synthesize itemKind=_itemKind - In the implementation block
-(void)setModelObject:(MPModelObject *)arg1 ;
-(MPModelKind *)itemKind;
-(MPModelObject *)modelObject;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(void)setItemKind:(MPModelKind *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

