/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,readonly) id value;                                                                                               //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long valueType;                                                                           //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) unsigned long long styleType;                                                                           //@synthesize styleType=_styleType - In the implementation block
@property (assign,getter=shouldCancelPendingUpdates,nonatomic) BOOL cancelPendingUpdates;                                              //@synthesize cancelPendingUpdates=_cancelPendingUpdates - In the implementation block
@property (assign,nonatomic) double lingerTimeInterval;                                                                                //@synthesize lingerTimeInterval=_lingerTimeInterval - In the implementation block
@property (assign,getter=shouldSpeakAccessibilityTitleWhenDisplayed,nonatomic) BOOL speakAccessibilityTitleWhenDisplayed;              //@synthesize speakAccessibilityTitleWhenDisplayed=_speakAccessibilityTitleWhenDisplayed - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityTitle; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)value;
-(id)initWithImage:(id)arg1 ;
-(unsigned long long)valueType;
-(unsigned long long)styleType;
-(NSString *)accessibilityTitle;
-(void)setCancelPendingUpdates:(BOOL)arg1 ;
-(BOOL)shouldCancelPendingUpdates;
-(BOOL)shouldSpeakAccessibilityTitleWhenDisplayed;
-(double)lingerTimeInterval;
-(id)initWithText:(id)arg1 styleType:(unsigned long long)arg2 ;
-(void)setSpeakAccessibilityTitleWhenDisplayed:(BOOL)arg1 ;
-(id)initWithValue:(id)arg1 valueType:(unsigned long long)arg2 styleType:(unsigned long long)arg3 ;
-(id)initWithText:(id)arg1 styleType:(unsigned long long)arg2 glyph:(id)arg3 ;
-(void)setLingerTimeInterval:(double)arg1 ;
@end

