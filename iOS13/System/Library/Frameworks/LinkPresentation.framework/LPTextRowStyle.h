/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)left;
-(LPTextViewStyle *)leading;
-(LPTextViewStyle *)trailing;
-(id)right;
-(void)applyToAllTextViewStyles:(/*^block*/id)arg1 ;
-(long long)balancingMode;
-(void)setBalancingMode:(long long)arg1 ;
@end

