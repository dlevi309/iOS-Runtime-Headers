/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIView, UIColor, NSArray, TVPlaylist;

@interface TVMediaInfo : NSObject <NSCopying> {

	long long _intent;
	UIView* _contentView;
	UIColor* _backgroundColor;
	NSArray* _imageProxies;
	TVPlaylist* _playlist;
	UIView* _overlayView;

}

@property (assign,nonatomic) long long intent;                       //@synthesize intent=_intent - In the implementation block
@property (nonatomic,retain) UIView * contentView;                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSArray * imageProxies;                   //@synthesize imageProxies=_imageProxies - In the implementation block
@property (nonatomic,retain) TVPlaylist * playlist;                  //@synthesize playlist=_playlist - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                   //@synthesize overlayView=_overlayView - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)intent;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setIntent:(long long)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
-(TVPlaylist *)playlist;
-(void)setPlaylist:(TVPlaylist *)arg1 ;
-(void)setImageProxies:(NSArray *)arg1 ;
-(NSArray *)imageProxies;
@end

