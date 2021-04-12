/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIAccessoryViewController.h>

@class TLKStoreButton;

@interface SearchUIAppStoreButtonViewController : SearchUIAccessoryViewController {

	BOOL _appIsInstalled;
	TLKStoreButton* _appStoreButton;

}

@property (nonatomic,retain) TLKStoreButton * appStoreButton;              //@synthesize appStoreButton=_appStoreButton - In the implementation block
@property (assign,nonatomic) BOOL appIsInstalled;                          //@synthesize appIsInstalled=_appIsInstalled - In the implementation block
+(BOOL)supportsRowModel:(id)arg1 ;
-(unsigned long long)type;
-(id)setupView;
-(void)buttonPressed;
-(void)updateWithRowModel:(id)arg1 ;
-(BOOL)shouldTopAlignForAccessibilityContentSizes;
-(void)setAppStoreButton:(TLKStoreButton *)arg1 ;
-(void)setAppIsInstalled:(BOOL)arg1 ;
-(BOOL)appIsInstalled;
-(TLKStoreButton *)appStoreButton;
@end

