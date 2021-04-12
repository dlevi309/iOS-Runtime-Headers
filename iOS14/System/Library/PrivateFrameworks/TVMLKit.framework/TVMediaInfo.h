/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)intent;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setIntent:(long long)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)description;
-(TVPlaylist *)playlist;
-(void)setContentView:(UIView *)arg1 ;
-(unsigned long long)hash;
-(UIView *)contentView;
-(void)setPlaylist:(TVPlaylist *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setImageProxies:(NSArray *)arg1 ;
-(NSArray *)imageProxies;
@end

