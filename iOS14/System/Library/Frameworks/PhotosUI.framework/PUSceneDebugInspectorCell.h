/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UITableViewCell.h>

@class PUSceneDebugInspectorSceneViewModel, UILabel;

@interface PUSceneDebugInspectorCell : UITableViewCell {

	PUSceneDebugInspectorSceneViewModel* _viewModel;
	UILabel* _keywordLabel;
	UILabel* _synonymsLabel;
	UILabel* _sceneIdentifierLabel;
	UILabel* _countLabel;
	UILabel* _isIndexedLabel;
	UILabel* _thresholdLabel;
	UILabel* _coverageLabel;

}

@property (nonatomic,retain) UILabel * keywordLabel;                                       //@synthesize keywordLabel=_keywordLabel - In the implementation block
@property (nonatomic,retain) UILabel * synonymsLabel;                                      //@synthesize synonymsLabel=_synonymsLabel - In the implementation block
@property (nonatomic,retain) UILabel * sceneIdentifierLabel;                               //@synthesize sceneIdentifierLabel=_sceneIdentifierLabel - In the implementation block
@property (nonatomic,retain) UILabel * countLabel;                                         //@synthesize countLabel=_countLabel - In the implementation block
@property (nonatomic,retain) UILabel * isIndexedLabel;                                     //@synthesize isIndexedLabel=_isIndexedLabel - In the implementation block
@property (nonatomic,retain) UILabel * thresholdLabel;                                     //@synthesize thresholdLabel=_thresholdLabel - In the implementation block
@property (nonatomic,retain) UILabel * coverageLabel;                                      //@synthesize coverageLabel=_coverageLabel - In the implementation block
@property (nonatomic,retain) PUSceneDebugInspectorSceneViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
+(id)reuseIdentifier;
-(PUSceneDebugInspectorSceneViewModel *)viewModel;
-(void)prepareForReuse;
-(UILabel *)keywordLabel;
-(void)setKeywordLabel:(UILabel *)arg1 ;
-(UILabel *)synonymsLabel;
-(void)setSynonymsLabel:(UILabel *)arg1 ;
-(UILabel *)sceneIdentifierLabel;
-(void)setSceneIdentifierLabel:(UILabel *)arg1 ;
-(UILabel *)isIndexedLabel;
-(UILabel *)thresholdLabel;
-(void)setViewModel:(PUSceneDebugInspectorSceneViewModel *)arg1 ;
-(void)setIsIndexedLabel:(UILabel *)arg1 ;
-(void)setThresholdLabel:(UILabel *)arg1 ;
-(UILabel *)coverageLabel;
-(void)setCoverageLabel:(UILabel *)arg1 ;
-(void)setCountLabel:(UILabel *)arg1 ;
-(UILabel *)countLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

