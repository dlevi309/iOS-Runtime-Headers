/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSString;

@interface SUComposeTextFieldConfiguration : NSObject {

	UIEdgeInsets _borderInsets;
	BOOL _isRequired;
	NSString* _label;
	unsigned long long _maxLength;
	NSString* _placeholder;
	NSString* _value;

}

@property (assign,nonatomic) UIEdgeInsets borderInsets;                    //@synthesize borderInsets=_borderInsets - In the implementation block
@property (nonatomic,retain) NSString * label;                             //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength;                 //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,retain) NSString * placeholder;                       //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,getter=isRequired,nonatomic) BOOL required;              //@synthesize isRequired=_isRequired - In the implementation block
@property (nonatomic,retain) NSString * value;                             //@synthesize value=_value - In the implementation block
-(void)dealloc;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setRequired:(BOOL)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(unsigned long long)maxLength;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(BOOL)isRequired;
-(UIEdgeInsets)borderInsets;
-(void)setBorderInsets:(UIEdgeInsets)arg1 ;
@end

