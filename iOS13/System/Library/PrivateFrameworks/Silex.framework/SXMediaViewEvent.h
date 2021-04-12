/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

