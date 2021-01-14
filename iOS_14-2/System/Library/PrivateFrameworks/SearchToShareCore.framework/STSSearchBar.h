/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <UIKitCore/UISearchBar.h>

@protocol STSSearchBarDelegate;
@interface STSSearchBar : UISearchBar {

	BOOL _clickBeganInSearchBar;
	id<STSSearchBarDelegate> _stsDelegate;

}

@property (assign,nonatomic,__weak) id<STSSearchBarDelegate> stsDelegate;              //@synthesize stsDelegate=_stsDelegate - In the implementation block
-(void)setStsDelegate:(id<STSSearchBarDelegate>)arg1 ;
-(id<STSSearchBarDelegate>)stsDelegate;
@end

