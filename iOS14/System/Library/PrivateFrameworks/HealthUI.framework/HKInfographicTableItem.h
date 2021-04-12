/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKInfographicItem.h>

@class NSAttributedString, NSString;

@interface HKInfographicTableItem : NSObject <HKInfographicItem> {

	BOOL _separatorHidden;
	NSAttributedString* _titleString;
	NSAttributedString* _valueString;

}

@property (nonatomic,retain) NSAttributedString * titleString;              //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,retain) NSAttributedString * valueString;              //@synthesize valueString=_valueString - In the implementation block
@property (assign,nonatomic) BOOL separatorHidden;                          //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSAttributedString *)valueString;
-(void)setValueString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)titleString;
-(BOOL)separatorHidden;
-(void)setTitleString:(NSAttributedString *)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 value:(id)arg2 separatorHidden:(BOOL)arg3 ;
-(id)initWithTitle:(id)arg1 value:(id)arg2 ;
@end

