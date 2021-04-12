/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelObject;

@interface MPModelLibraryDeleteEntityChangeRequest : NSObject <NSCopying> {

	MPModelObject* _modelObject;

}

@property (nonatomic,retain) MPModelObject * modelObject;              //@synthesize modelObject=_modelObject - In the implementation block
-(void)setModelObject:(MPModelObject *)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelObject *)modelObject;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

