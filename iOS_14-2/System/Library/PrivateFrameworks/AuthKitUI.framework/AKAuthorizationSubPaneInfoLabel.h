/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AKAuthorizationSubPane.h>

@class UILabel, NSString;

@interface AKAuthorizationSubPaneInfoLabel : AKAuthorizationSubPane {

	double _marginInset;
	UILabel* _infoLabel;
	unsigned long long _internalInfoLabelType;

}

@property (nonatomic,readonly) UILabel * infoLabel;                                 //@synthesize infoLabel=_infoLabel - In the implementation block
@property (assign,nonatomic) unsigned long long internalInfoLabelType;              //@synthesize internalInfoLabelType=_internalInfoLabelType - In the implementation block
@property (nonatomic,copy) NSString * string; 
@property (assign,nonatomic) double marginInset;                                    //@synthesize marginInset=_marginInset - In the implementation block
@property (assign,nonatomic) unsigned long long infoLabelType; 
-(id)initWithString:(id)arg1 ;
-(id)titleFont;
-(UILabel *)infoLabel;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(id)messageFont;
-(void)addToStackView:(id)arg1 context:(id)arg2 ;
-(void)addToConstraints:(id)arg1 context:(id)arg2 ;
-(void)setInfoLabelType:(unsigned long long)arg1 ;
-(id)infoLabelWithString:(id)arg1 ;
-(double)marginInset;
-(unsigned long long)internalInfoLabelType;
-(void)setInternalInfoLabelType:(unsigned long long)arg1 ;
-(void)setLabel:(id)arg1 toInfoLabelType:(unsigned long long)arg2 ;
-(unsigned long long)infoLabelType;
-(void)setMarginInset:(double)arg1 ;
@end

