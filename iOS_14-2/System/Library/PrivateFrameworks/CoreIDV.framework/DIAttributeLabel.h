/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
*/

#import <CoreIDV/DIAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DIAttributeLabel : DIAttribute <NSSecureCoding> {

	NSString* defaultValue;
	NSString* _buttonTitle;
	NSString* _detailTitle;
	NSString* _detailSubtitle;
	NSString* _detailBody;
	NSString* _businessChatButtonTitle;
	NSString* _businessChatIdentifier;
	NSString* _businessChatIntentName;

}

@property (nonatomic,copy) NSString * defaultValue; 
@property (nonatomic,copy) NSString * buttonTitle;                          //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy) NSString * detailTitle;                          //@synthesize detailTitle=_detailTitle - In the implementation block
@property (nonatomic,copy) NSString * detailSubtitle;                       //@synthesize detailSubtitle=_detailSubtitle - In the implementation block
@property (nonatomic,copy) NSString * detailBody;                           //@synthesize detailBody=_detailBody - In the implementation block
@property (nonatomic,copy) NSString * businessChatButtonTitle;              //@synthesize businessChatButtonTitle=_businessChatButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * businessChatIdentifier;               //@synthesize businessChatIdentifier=_businessChatIdentifier - In the implementation block
@property (nonatomic,copy) NSString * businessChatIntentName;               //@synthesize businessChatIntentName=_businessChatIntentName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDefaultValue:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(id)init;
-(NSString *)defaultValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setButtonTitle:(NSString *)arg1 ;
-(void)setDetailTitle:(NSString *)arg1 ;
-(void)setDetailSubtitle:(NSString *)arg1 ;
-(void)setDetailBody:(NSString *)arg1 ;
-(void)setBusinessChatIdentifier:(NSString *)arg1 ;
-(void)setBusinessChatButtonTitle:(NSString *)arg1 ;
-(void)setBusinessChatIntentName:(NSString *)arg1 ;
-(NSString *)detailTitle;
-(NSString *)detailSubtitle;
-(NSString *)detailBody;
-(NSString *)businessChatButtonTitle;
-(NSString *)businessChatIdentifier;
-(NSString *)businessChatIntentName;
@end

