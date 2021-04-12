/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateWithRowModel:(id)arg1 ;
-(void)setAppStoreButton:(TLKStoreButton *)arg1 ;
-(void)setAppIsInstalled:(BOOL)arg1 ;
-(BOOL)appIsInstalled;
-(TLKStoreButton *)appStoreButton;
-(BOOL)shouldTopAlignForAccessibilityContentSizes;
-(id)setupView;
-(void)buttonPressed;
-(unsigned long long)type;
@end

