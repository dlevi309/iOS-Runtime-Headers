/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/


#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
@class NSImage, UIImage, QLThumbnailMetadata;

@interface QLThumbnailRepresentation : NSObject {

	int _flavor;
	long long _type;
	NSImage* _NSImage;
	UIImage* _UIImageThumbnail;
	CGImageRef _CGImageThumbnail;
	double _scale;
	QLThumbnailMetadata* _generatedProperties;
	CGRect _contentRect;

}

@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UIImage * UIImageThumbnail;                   //@synthesize UIImageThumbnail=_UIImageThumbnail - In the implementation block
@property (assign,nonatomic) CGImageRef CGImageThumbnail;                  //@synthesize CGImageThumbnail=_CGImageThumbnail - In the implementation block
@property (assign,nonatomic) double scale;                                 //@synthesize scale=_scale - In the implementation block
@property (assign) int flavor;                                             //@synthesize flavor=_flavor - In the implementation block
@property (assign) CGRect contentRect;                                     //@synthesize contentRect=_contentRect - In the implementation block
@property (retain) QLThumbnailMetadata * generatedProperties;              //@synthesize generatedProperties=_generatedProperties - In the implementation block
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) UIImage * UIImage; 
@property (nonatomic,readonly) NSImage * NSImage;                          //@synthesize NSImage=_NSImage - In the implementation block
-(void)dealloc;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(double)scale;
-(CGImageRef)CGImage;
-(void)setScale:(double)arg1 ;
-(CGRect)contentRect;
-(void)setContentRect:(CGRect)arg1 ;
-(int)flavor;
-(UIImage *)UIImage;
-(void)setFlavor:(int)arg1 ;
-(NSImage *)NSImage;
-(id)initWithThumbnailType:(long long)arg1 iconFlavor:(int)arg2 CGImage:(CGImageRef)arg3 scale:(double)arg4 contentRect:(CGRect)arg5 generatedProperties:(id)arg6 ;
-(UIImage *)UIImageThumbnail;
-(void)setUIImageThumbnail:(UIImage *)arg1 ;
-(CGImageRef)CGImageThumbnail;
-(void)setCGImageThumbnail:(CGImageRef)arg1 ;
-(QLThumbnailMetadata *)generatedProperties;
-(void)setGeneratedProperties:(QLThumbnailMetadata *)arg1 ;
@end

