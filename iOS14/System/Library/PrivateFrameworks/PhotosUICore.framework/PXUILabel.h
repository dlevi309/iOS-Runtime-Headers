/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIVisualEffectView, NSArray, NSString, PXLabelSpec;

@interface PXUILabel : UIView {

	UILabel* _label;
	UIVisualEffectView* _visualEffectView;
	NSArray* _labelLayoutConstraints;
	long long _verticalAlignment;
	UIEdgeInsets _contentInsets;
	NSString* _text;
	PXLabelSpec* _spec;

}

@property (nonatomic,copy) NSString * text;                   //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) PXLabelSpec * spec;              //@synthesize spec=_spec - In the implementation block
-(void)setSpec:(PXLabelSpec *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(PXLabelSpec *)spec;
-(void)updateConstraints;
-(NSString *)text;
-(void)_configureLabel;
-(void)_commonPXMemoriesLabelInitialization;
-(id)_configuredText;
-(id)initWithCoder:(id)arg1 ;
@end

