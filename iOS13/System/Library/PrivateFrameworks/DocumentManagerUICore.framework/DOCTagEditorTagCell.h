/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class DOCLargeTagView, DOCTag;

@interface DOCTagEditorTagCell : UICollectionViewCell {

	BOOL _mixedSelection;
	DOCLargeTagView* _tagView;

}

@property (nonatomic,retain) DOCLargeTagView * tagView;              //@synthesize tagView=_tagView - In the implementation block
@property (nonatomic,retain) DOCTag * tagValue; 
@property (assign,nonatomic) BOOL mixedSelection;                    //@synthesize mixedSelection=_mixedSelection - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)updateStyle;
-(void)setTagView:(DOCLargeTagView *)arg1 ;
-(DOCLargeTagView *)tagView;
-(void)setTagValue:(DOCTag *)arg1 ;
-(DOCTag *)tagValue;
-(BOOL)mixedSelection;
-(void)setMixedSelection:(BOOL)arg1 ;
@end

