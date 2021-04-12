/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class PXStateBadgeView, UILabel, NSDictionary, NSString;

@interface PXDiagnosticsCurationSectionHeaderView : UICollectionViewCell {

	PXStateBadgeView* _stateBadgeView;
	UILabel* _agentAndStageLabel;
	UILabel* _reasonLabel;
	NSDictionary* _sectionInfo;
	NSString* _state;
	NSString* _agentAndStage;
	NSString* _reason;

}

@property (nonatomic,retain) NSDictionary * sectionInfo;              //@synthesize sectionInfo=_sectionInfo - In the implementation block
@property (nonatomic,retain) NSString * state;                        //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * agentAndStage;                //@synthesize agentAndStage=_agentAndStage - In the implementation block
@property (nonatomic,retain) NSString * reason;                       //@synthesize reason=_reason - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAgentAndStage:(NSString *)arg1 ;
-(NSString *)agentAndStage;
-(NSDictionary *)sectionInfo;
-(void)setSectionInfo:(NSDictionary *)arg1 ;
-(NSString *)reason;
-(void)setState:(NSString *)arg1 ;
-(NSString *)state;
-(void)setReason:(NSString *)arg1 ;
@end

