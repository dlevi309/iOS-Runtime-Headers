/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class UIImage;

@interface MPArtworkRepresentation : NSObject {

	UIImage* _image;
	id _representationToken;
	CGSize _representationSize;

}

@property (nonatomic,retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize representationSize;              //@synthesize representationSize=_representationSize - In the implementation block
@property (nonatomic,retain) id representationToken;                 //@synthesize representationToken=_representationToken - In the implementation block
+(id)representationWithSize:(CGSize)arg1 image:(id)arg2 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)debugQuickLookObject;
-(CGSize)representationSize;
-(void)setRepresentationSize:(CGSize)arg1 ;
-(id)representationToken;
-(void)setRepresentationToken:(id)arg1 ;
@end

