/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSString;

@interface SKUIComposeTextFieldConfiguration : NSObject {

	UIEdgeInsets _borderInsets;
	long long _columnIndex;
	BOOL _isRequired;
	NSString* _label;
	unsigned long long _maxLength;
	NSString* _placeholder;
	NSString* _value;

}

@property (assign,nonatomic) UIEdgeInsets borderInsets;                    //@synthesize borderInsets=_borderInsets - In the implementation block
@property (assign,nonatomic) long long columnIndex;                        //@synthesize columnIndex=_columnIndex - In the implementation block
@property (nonatomic,copy) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength;                 //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                         //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,getter=isRequired,nonatomic) BOOL required;              //@synthesize isRequired=_isRequired - In the implementation block
@property (nonatomic,copy) NSString * value;                               //@synthesize value=_value - In the implementation block
-(long long)columnIndex;
-(void)setRequired:(BOOL)arg1 ;
-(BOOL)isRequired;
-(void)setColumnIndex:(long long)arg1 ;
-(unsigned long long)maxLength;
-(void)setValue:(NSString *)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(void)setLabel:(NSString *)arg1 ;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(NSString *)label;
-(NSString *)value;
-(UIEdgeInsets)borderInsets;
-(void)setBorderInsets:(UIEdgeInsets)arg1 ;
@end

