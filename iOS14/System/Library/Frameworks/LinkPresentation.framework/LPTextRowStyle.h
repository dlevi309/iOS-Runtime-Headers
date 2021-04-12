/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class LPTextViewStyle;

@interface LPTextRowStyle : NSObject {

	LPTextViewStyle* _leading;
	LPTextViewStyle* _trailing;
	long long _balancingMode;

}

@property (nonatomic,readonly) LPTextViewStyle * leading;               //@synthesize leading=_leading - In the implementation block
@property (nonatomic,readonly) LPTextViewStyle * trailing;              //@synthesize trailing=_trailing - In the implementation block
@property (assign,nonatomic) long long balancingMode;                   //@synthesize balancingMode=_balancingMode - In the implementation block
-(id)left;
-(id)initWithPlatform:(long long)arg1 ;
-(LPTextViewStyle *)leading;
-(id)right;
-(void)applyToAllTextViewStyles:(/*^block*/id)arg1 ;
-(long long)balancingMode;
-(void)setBalancingMode:(long long)arg1 ;
-(LPTextViewStyle *)trailing;
@end

