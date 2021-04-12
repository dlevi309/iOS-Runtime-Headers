/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView, UILabel, UIView, NSLayoutConstraint, UIImageView, NSString;

@interface _SFQuickLookDocumentInfoView : UIView {

	UIStackView* _stackView;
	UILabel* _fileNameLabel;
	UILabel* _fileSizeLabel;
	UIView* _spacingView;
	NSLayoutConstraint* _iconHeightConstraint;
	NSLayoutConstraint* _iconWidthConstraint;
	NSLayoutConstraint* _lineHeightBetweenIconAndFileNameLabelConstraint;
	UIImageView* _iconImageView;
	NSString* _fileName;
	NSString* _fileSize;
	NSString* _fileType;

}

@property (nonatomic,retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) NSString * fileName;                      //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSString * fileSize;                      //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSString * fileType;                      //@synthesize fileType=_fileType - In the implementation block
-(NSString *)fileSize;
-(NSString *)fileType;
-(void)setFileType:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setFileSize:(NSString *)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(void)_updatePropertiesDefinedByContentSizeCategory;
-(void)_configureOrientationBasedConstraints:(long long)arg1 ;
-(void)_updateDocumentSizeLabel;
@end

