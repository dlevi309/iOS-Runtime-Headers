/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIImage *)UIImage;
-(CGRect)contentRect;
-(double)scale;
-(void)setType:(long long)arg1 ;
-(id)description;
-(void)setContentRect:(CGRect)arg1 ;
-(void)setScale:(double)arg1 ;
-(long long)type;
-(NSImage *)NSImage;
-(int)flavor;
-(void)setFlavor:(int)arg1 ;
-(CGImageRef)CGImage;
-(void)dealloc;
-(QLThumbnailMetadata *)generatedProperties;
-(void)setGeneratedProperties:(QLThumbnailMetadata *)arg1 ;
-(id)initWithThumbnailType:(long long)arg1 iconFlavor:(int)arg2 CGImage:(CGImageRef)arg3 scale:(double)arg4 contentRect:(CGRect)arg5 generatedProperties:(id)arg6 ;
-(UIImage *)UIImageThumbnail;
-(void)setUIImageThumbnail:(UIImage *)arg1 ;
-(CGImageRef)CGImageThumbnail;
-(void)setCGImageThumbnail:(CGImageRef)arg1 ;
@end

