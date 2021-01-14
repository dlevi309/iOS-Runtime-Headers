/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXMediaEvent.h>

@class NSArray;

@interface SXMediaViewEvent : SXMediaEvent {

	unsigned long long _galleryImageCount;
	NSArray* _galleryImageIds;

}

@property (assign,nonatomic) unsigned long long galleryImageCount;              //@synthesize galleryImageCount=_galleryImageCount - In the implementation block
@property (nonatomic,retain) NSArray * galleryImageIds;                         //@synthesize galleryImageIds=_galleryImageIds - In the implementation block
-(void)setGalleryImageCount:(unsigned long long)arg1 ;
-(unsigned long long)galleryImageCount;
-(NSArray *)galleryImageIds;
-(void)setGalleryImageIds:(NSArray *)arg1 ;
@end

