/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>

@class UIColor, UIImageView;

@interface LPCaptionBarAccessoryView : LPComponentView {

	long long _type;
	UIColor* _color;
	UIImageView* _accessoryView;

}

@property (nonatomic,readonly) CGSize size; 
-(void)layoutComponentView;
-(id)init;
-(CGSize)size;
-(id)_createImageViewWithImage:(id)arg1 ;
-(id)ensureAccessoryView;
-(id)initWithType:(long long)arg1 side:(long long)arg2 ;
@end

