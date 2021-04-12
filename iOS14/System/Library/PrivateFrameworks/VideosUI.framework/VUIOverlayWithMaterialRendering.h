/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


#import <VideosUI/VideosUI-Structs.h>
@class NSString;

@interface VUIOverlayWithMaterialRendering : NSObject {

	NSString* _identifier;
	CGRect _rect;

}

@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) CGRect rect;                      //@synthesize rect=_rect - In the implementation block
-(CGRect)rect;
-(id)init;
-(void)setRect:(CGRect)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 rect:(CGRect)arg2 ;
@end

