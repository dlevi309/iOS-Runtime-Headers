/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@class NSString;

@interface NUTitleViewUpdate : NSObject {

	BOOL _cancelPendingUpdates;
	BOOL _speakAccessibilityTitleWhenDisplayed;
	id _value;
	unsigned long long _valueType;
	unsigned long long _styleType;
	double _lingerTimeInterval;
	NSString* _accessibilityTitle;
	long long _textAlignment;

}

@property (nonatomic,readonly) id value;                                                                                               //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long valueType;                                                                           //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) unsigned long long styleType;                                                                           //@synthesize styleType=_styleType - In the implementation block
@property (assign,getter=shouldCancelPendingUpdates,nonatomic) BOOL cancelPendingUpdates;                                              //@synthesize cancelPendingUpdates=_cancelPendingUpdates - In the implementation block
@property (assign,nonatomic) double lingerTimeInterval;                                                                                //@synthesize lingerTimeInterval=_lingerTimeInterval - In the implementation block
@property (assign,getter=shouldSpeakAccessibilityTitleWhenDisplayed,nonatomic) BOOL speakAccessibilityTitleWhenDisplayed;              //@synthesize speakAccessibilityTitleWhenDisplayed=_speakAccessibilityTitleWhenDisplayed - In the implementation block
@property (nonatomic,copy) NSString * accessibilityTitle;                                                                              //@synthesize accessibilityTitle=_accessibilityTitle - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                                                                  //@synthesize textAlignment=_textAlignment - In the implementation block
-(unsigned long long)valueType;
-(id)initWithAttributedText:(id)arg1 styleType:(unsigned long long)arg2 ;
-(BOOL)shouldSpeakAccessibilityTitleWhenDisplayed;
-(id)init;
-(id)initWithImage:(id)arg1 ;
-(long long)textAlignment;
-(id)initWithText:(id)arg1 styleType:(unsigned long long)arg2 ;
-(BOOL)shouldCancelPendingUpdates;
-(void)setAccessibilityTitle:(NSString *)arg1 ;
-(void)setLingerTimeInterval:(double)arg1 ;
-(void)setSpeakAccessibilityTitleWhenDisplayed:(BOOL)arg1 ;
-(unsigned long long)styleType;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setCancelPendingUpdates:(BOOL)arg1 ;
-(double)lingerTimeInterval;
-(NSString *)accessibilityTitle;
-(id)initWithValue:(id)arg1 valueType:(unsigned long long)arg2 styleType:(unsigned long long)arg3 ;
-(id)value;
-(id)initWithText:(id)arg1 styleType:(unsigned long long)arg2 glyph:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

