/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <Foundation/NSOperation.h>

@protocol OS_dispatch_group;
@class UIImage, NSError, NSURL, NSObject;

@interface MPArtworkResizeOperation : NSOperation {

	BOOL _usesExactFittingSizeAsDestinationSize;
	UIImage* _resizedImage;
	NSError* _error;
	NSURL* _destinationURL;
	NSObject*<OS_dispatch_group> _operationGroup;
	UIImage* _image;
	CGSize _scaledFittingSize;

}

@property (nonatomic,retain) UIImage * image;                                            //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize scaledFittingSize;                                   //@synthesize scaledFittingSize=_scaledFittingSize - In the implementation block
@property (assign,nonatomic) BOOL usesExactFittingSizeAsDestinationSize;                 //@synthesize usesExactFittingSizeAsDestinationSize=_usesExactFittingSizeAsDestinationSize - In the implementation block
@property (nonatomic,readonly) UIImage * resizedImage;                                   //@synthesize resizedImage=_resizedImage - In the implementation block
@property (nonatomic,readonly) NSError * error;                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSURL * destinationURL;                                   //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> operationGroup;              //@synthesize operationGroup=_operationGroup - In the implementation block
-(CGSize)scaledFittingSize;
-(NSURL *)destinationURL;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(NSError *)error;
-(NSObject*<OS_dispatch_group>)operationGroup;
-(void)main;
-(UIImage *)resizedImage;
-(id)initWithImage:(id)arg1 scaledFittingSize:(CGSize)arg2 ;
-(id)initWithImage:(id)arg1 scaledFittingSize:(CGSize)arg2 destinationURL:(id)arg3 ;
-(BOOL)usesExactFittingSizeAsDestinationSize;
-(id)initWithImage:(id)arg1 scaledFittingSize:(CGSize)arg2 useExactFittingSizeAsDestinationSize:(BOOL)arg3 destinationURL:(id)arg4 ;
-(CGSize)_resizedScaledSizeForScaledImageSize:(CGSize)arg1 scaledFittingSize:(CGSize)arg2 ;
-(void)setScaledFittingSize:(CGSize)arg1 ;
-(void)setUsesExactFittingSizeAsDestinationSize:(BOOL)arg1 ;
@end

