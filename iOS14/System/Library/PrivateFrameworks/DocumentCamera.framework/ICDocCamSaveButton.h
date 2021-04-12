/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIButton.h>

@class UILabel, NSMutableArray;

@interface ICDocCamSaveButton : UIButton {

	long long _documentCount;
	long long _maxWidthForPortraitIPhone;
	UILabel* _countLabel;
	UILabel* _saveLabel;
	NSMutableArray* _layoutConstraints;

}

@property (nonatomic,retain) UILabel * countLabel;                             //@synthesize countLabel=_countLabel - In the implementation block
@property (nonatomic,retain) UILabel * saveLabel;                              //@synthesize saveLabel=_saveLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * layoutConstraints;               //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (assign,nonatomic) long long documentCount;                          //@synthesize documentCount=_documentCount - In the implementation block
@property (assign,nonatomic) long long maxWidthForPortraitIPhone;              //@synthesize maxWidthForPortraitIPhone=_maxWidthForPortraitIPhone - In the implementation block
-(id)accessibilityLabel;
-(id)accessibilityUserInputLabels;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSMutableArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSMutableArray *)arg1 ;
-(void)layoutSubviews;
-(void)setCountLabel:(UILabel *)arg1 ;
-(UILabel *)countLabel;
-(id)accessibilityHint;
-(UILabel *)saveLabel;
-(void)setSaveLabel:(UILabel *)arg1 ;
-(long long)documentCount;
-(id)saveButtonCountStringForDocumentCount:(unsigned long long)arg1 ;
-(id)saveButtonTitleForDocumentCount:(unsigned long long)arg1 ;
-(long long)maxWidthForPortraitIPhone;
-(void)setDocumentCount:(long long)arg1 ;
-(void)setMaxWidthForPortraitIPhone:(long long)arg1 ;
@end

