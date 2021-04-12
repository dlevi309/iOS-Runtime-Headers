/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class NSString;

@interface PKStackedTextItem : NSObject {

	BOOL _significantPrimary;
	BOOL _deemphasizedPrimary;
	BOOL _strikethroughPrimary;
	NSString* _groupingIdentifier;
	unsigned long long _numberOfContentRows;
	NSString* _title;
	NSString* _primary;
	NSString* _secondary;
	NSString* _tertiary;

}

@property (nonatomic,copy,readonly) NSString * groupingIdentifier;                                 //@synthesize groupingIdentifier=_groupingIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfContentRows;                             //@synthesize numberOfContentRows=_numberOfContentRows - In the implementation block
@property (nonatomic,copy) NSString * title;                                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * primary;                                                     //@synthesize primary=_primary - In the implementation block
@property (nonatomic,copy) NSString * secondary;                                                   //@synthesize secondary=_secondary - In the implementation block
@property (nonatomic,copy) NSString * tertiary;                                                    //@synthesize tertiary=_tertiary - In the implementation block
@property (assign,getter=isSignificantPrimary,nonatomic) BOOL significantPrimary;                  //@synthesize significantPrimary=_significantPrimary - In the implementation block
@property (assign,getter=isDeemphasizedPrimary,nonatomic) BOOL deemphasizedPrimary;                //@synthesize deemphasizedPrimary=_deemphasizedPrimary - In the implementation block
@property (assign,getter=isStrikethroughPrimary,nonatomic) BOOL strikethroughPrimary;              //@synthesize strikethroughPrimary=_strikethroughPrimary - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)groupingIdentifier;
-(void)setPrimary:(NSString *)arg1 ;
-(NSString *)primary;
-(id)initWithNumberOfContentRows:(unsigned long long)arg1 groupingIdentifier:(id)arg2 ;
-(void)setSignificantPrimary:(BOOL)arg1 ;
-(void)setSecondary:(NSString *)arg1 ;
-(void)setTertiary:(NSString *)arg1 ;
-(void)setStrikethroughPrimary:(BOOL)arg1 ;
-(void)setDeemphasizedPrimary:(BOOL)arg1 ;
-(BOOL)isStrikethroughPrimary;
-(NSString *)secondary;
-(NSString *)tertiary;
-(BOOL)isSignificantPrimary;
-(BOOL)isDeemphasizedPrimary;
-(unsigned long long)numberOfContentRows;
@end

