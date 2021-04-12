/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setScopeBarBackgroundImage:(UIImage *)arg1 ;
-(UIImage *)scopeBarBackgroundImage;
-(UIImage *)separatorImage;
-(void)setSeparatorImage:(UIImage *)arg1 ;
-(void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)searchFieldBackgroundImageForState:(unsigned long long)arg1 ;
-(void)setImage:(id)arg1 forIcon:(long long)arg2 state:(unsigned long long)arg3 ;
-(id)imageForIcon:(long long)arg1 state:(unsigned long long)arg2 ;
-(NSValue *)searchFieldPositionAdjustment;
-(void)setSearchFieldPositionAdjustment:(NSValue *)arg1 ;
@end

