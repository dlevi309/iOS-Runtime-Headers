/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class NSString, UIColor;

@interface PKPaymentTransactionPresentationInformation : NSObject {

	BOOL _shouldGrayValue;
	BOOL _shouldStrikeValue;
	BOOL _shouldShowDisclosure;
	NSString* _primaryString;
	NSString* _secondaryString;
	NSString* _tertiaryString;
	UIColor* _customSecondaryColor;
	NSString* _rewardsString;
	NSString* _valueString;

}

@property (nonatomic,retain) NSString * primaryString;                    //@synthesize primaryString=_primaryString - In the implementation block
@property (nonatomic,retain) NSString * secondaryString;                  //@synthesize secondaryString=_secondaryString - In the implementation block
@property (nonatomic,retain) NSString * tertiaryString;                   //@synthesize tertiaryString=_tertiaryString - In the implementation block
@property (nonatomic,retain) UIColor * customSecondaryColor;              //@synthesize customSecondaryColor=_customSecondaryColor - In the implementation block
@property (nonatomic,retain) NSString * rewardsString;                    //@synthesize rewardsString=_rewardsString - In the implementation block
@property (nonatomic,retain) NSString * valueString;                      //@synthesize valueString=_valueString - In the implementation block
@property (assign,nonatomic) BOOL shouldGrayValue;                        //@synthesize shouldGrayValue=_shouldGrayValue - In the implementation block
@property (assign,nonatomic) BOOL shouldStrikeValue;                      //@synthesize shouldStrikeValue=_shouldStrikeValue - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDisclosure;                   //@synthesize shouldShowDisclosure=_shouldShowDisclosure - In the implementation block
-(NSString *)valueString;
-(void)setValueString:(NSString *)arg1 ;
-(NSString *)primaryString;
-(BOOL)shouldShowDisclosure;
-(void)setPrimaryString:(NSString *)arg1 ;
-(void)setTertiaryString:(NSString *)arg1 ;
-(void)setSecondaryString:(NSString *)arg1 ;
-(NSString *)secondaryString;
-(NSString *)tertiaryString;
-(UIColor *)customSecondaryColor;
-(void)setCustomSecondaryColor:(UIColor *)arg1 ;
-(NSString *)rewardsString;
-(void)setRewardsString:(NSString *)arg1 ;
-(BOOL)shouldGrayValue;
-(void)setShouldGrayValue:(BOOL)arg1 ;
-(BOOL)shouldStrikeValue;
-(void)setShouldStrikeValue:(BOOL)arg1 ;
-(void)setShouldShowDisclosure:(BOOL)arg1 ;
@end

