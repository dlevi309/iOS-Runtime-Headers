/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableDictionary, NSValue, UIImage;

@interface _UISearchBarAppearanceStorage : NSObject {

	NSMutableDictionary* searchFieldBackgroundImages;
	NSValue* searchFieldPositionAdjustment;
	NSMutableDictionary* iconImages;
	UIImage* separatorImage;
	UIImage* scopeBarBackgroundImage;

}

@property (nonatomic,retain) NSValue * searchFieldPositionAdjustment; 
@property (nonatomic,retain) UIImage * separatorImage; 
@property (nonatomic,retain) UIImage * scopeBarBackgroundImage; 
-(id)searchFieldBackgroundImageForState:(unsigned long long)arg1 ;
-(void)setScopeBarBackgroundImage:(UIImage *)arg1 ;
-(void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setSeparatorImage:(UIImage *)arg1 ;
-(UIImage *)scopeBarBackgroundImage;
-(void)setImage:(id)arg1 forIcon:(long long)arg2 state:(unsigned long long)arg3 ;
-(id)imageForIcon:(long long)arg1 state:(unsigned long long)arg2 ;
-(UIImage *)separatorImage;
-(NSValue *)searchFieldPositionAdjustment;
-(void)setSearchFieldPositionAdjustment:(NSValue *)arg1 ;
@end

