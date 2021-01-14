/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <OnBoardingKit/OBHeaderView.h>
#import <libobjc.A.dylib/RUIHeader.h>

@class UILabel, NSString;

@interface RUIModernHeaderView : OBHeaderView <RUIHeader> {

	UILabel* _headerLabel;
	UILabel* _detailLabel;
	NSString* _detailText;
	NSString* _subHeaderText;

}

@property (nonatomic,retain) UILabel * headerLabel;                 //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                 //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) NSString * detailText;                 //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,retain) NSString * subHeaderText;              //@synthesize subHeaderText=_subHeaderText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTitle:(id)arg1 ;
-(double)topPadding;
-(double)bottomPadding;
-(double)iconHeight;
-(double)iconToHeaderLabelPadding;
-(id)initWithAttributes:(id)arg1 ;
-(void)setDetailText:(NSString *)arg1 ;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
-(void)setIconImage:(id)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(NSString *)detailText;
-(UILabel *)detailLabel;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
-(double)headerHeightForWidth:(double)arg1 inView:(id)arg2 ;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2 ;
-(void)setDetailText:(id)arg1 attributes:(id)arg2 ;
-(void)updateDetailText;
-(NSString *)subHeaderText;
-(void)setSubHeaderText:(NSString *)arg1 ;
@end

