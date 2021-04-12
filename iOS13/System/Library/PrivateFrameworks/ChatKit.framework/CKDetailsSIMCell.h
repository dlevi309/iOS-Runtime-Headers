/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKDetailsCell.h>
#import <libobjc.A.dylib/CKDetailsCell.h>

@class UILabel, NSString;

@interface CKDetailsSIMCell : CKDetailsCell <CKDetailsCell> {

	UILabel* _simTitleLabel;

}

@property (nonatomic,retain) UILabel * simTitleLabel;               //@synthesize simTitleLabel=_simTitleLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeight;
+(id)reuseIdentifier;
+(BOOL)shouldHighlight;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSimTitleLabel:(UILabel *)arg1 ;
-(UILabel *)simTitleLabel;
-(void)initConstraints;
@end

