/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class PXUpdater, UILabel, NSString;

@interface PXCMMTranscriptTextView : UIView {

	PXUpdater* _updater;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	NSString* _primaryText;
	NSString* _secondaryText;

}

@property (nonatomic,copy) NSString * primaryText;                //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;              //@synthesize secondaryText=_secondaryText - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_updatePrimaryLabel;
-(void)_updateSecondaryLabel;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(CGSize)_performLayoutInSize:(CGSize)arg1 minimizingSize:(BOOL)arg2 updateSubviewFrames:(BOOL)arg3 ;
@end

