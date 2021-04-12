/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <UIKitCore/UIImageView.h>

@class _SBFolderPageElement, SBFolderIconImageView;

@interface _SBIconGridWrapperView : UIImageView {

	_SBFolderPageElement* _element;
	SBFolderIconImageView* _folderIconImageView;

}

@property (nonatomic,retain) _SBFolderPageElement * element;                                  //@synthesize element=_element - In the implementation block
@property (assign,nonatomic,__weak) SBFolderIconImageView * folderIconImageView;              //@synthesize folderIconImageView=_folderIconImageView - In the implementation block
-(_SBFolderPageElement *)element;
-(void)setElement:(_SBFolderPageElement *)arg1 ;
-(SBFolderIconImageView *)folderIconImageView;
-(void)reposition;
-(void)positionAtRow:(unsigned long long)arg1 ;
-(void)setFolderIconImageView:(SBFolderIconImageView *)arg1 ;
@end

