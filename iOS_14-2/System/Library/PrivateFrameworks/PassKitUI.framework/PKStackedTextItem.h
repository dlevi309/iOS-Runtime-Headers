/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)primary;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)numberOfContentRows;
-(NSString *)tertiary;
-(BOOL)isStrikethroughPrimary;
-(NSString *)secondary;
-(BOOL)isSignificantPrimary;
-(BOOL)isDeemphasizedPrimary;
-(NSString *)groupingIdentifier;
-(unsigned long long)hash;
-(id)initWithNumberOfContentRows:(unsigned long long)arg1 groupingIdentifier:(id)arg2 ;
-(void)setSignificantPrimary:(BOOL)arg1 ;
-(void)setSecondary:(NSString *)arg1 ;
-(void)setTertiary:(NSString *)arg1 ;
-(void)setStrikethroughPrimary:(BOOL)arg1 ;
-(void)setDeemphasizedPrimary:(BOOL)arg1 ;
-(void)setPrimary:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

