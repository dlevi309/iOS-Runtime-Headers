/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(DOCLargeTagView *)tagView;
-(void)setTagView:(DOCLargeTagView *)arg1 ;
-(DOCTag *)tagValue;
-(void)setTagValue:(DOCTag *)arg1 ;
-(BOOL)mixedSelection;
-(void)setMixedSelection:(BOOL)arg1 ;
@end

