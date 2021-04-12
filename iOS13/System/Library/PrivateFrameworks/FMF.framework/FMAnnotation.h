/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
*/

@class FMAccuracyOverlay, UIColor, UIImage, NSString;


@protocol FMAnnotation <NSObject>
@property (nonatomic,retain) FMAccuracyOverlay * overlay; 
@property (assign,nonatomic) double horizontalAccuracy; 
@property (assign,nonatomic) CLLocationCoordinate2D coordinate; 
@property (assign,nonatomic) double distanceFromUser; 
@property (assign,nonatomic) BOOL isBorderEnabled; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIImage * largeAnnotationIcon; 
@property (nonatomic,retain) UIImage * smallAnnotationIcon; 
@property (nonatomic,retain) UIImage * largeOverlayIcon; 
@property (nonatomic,retain) UIImage * smallOverlayIcon; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@optional
-(NSString *)title;
-(NSString *)subtitle;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1;

@required
-(CLLocationCoordinate2D)coordinate;
-(FMAccuracyOverlay *)overlay;
-(double)horizontalAccuracy;
-(void)setHorizontalAccuracy:(double)arg1;
-(UIColor *)tintColor;
-(void)setTintColor:(id)arg1;
-(BOOL)hasKnownLocation;
-(BOOL)isThisDevice;
-(void)setOverlay:(id)arg1;
-(double)distanceFromUser;
-(void)setDistanceFromUser:(double)arg1;
-(BOOL)isBorderEnabled;
-(void)setIsBorderEnabled:(BOOL)arg1;
-(UIImage *)largeAnnotationIcon;
-(void)setLargeAnnotationIcon:(id)arg1;
-(UIImage *)smallAnnotationIcon;
-(void)setSmallAnnotationIcon:(id)arg1;
-(UIImage *)largeOverlayIcon;
-(void)setLargeOverlayIcon:(id)arg1;
-(UIImage *)smallOverlayIcon;
-(void)setSmallOverlayIcon:(id)arg1;

@end

