/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TISKInputEvent.h>

@interface TISKCharKeyEvent : TISKInputEvent {

	BOOL _isShortWord;
	long long _wordPosition;

}

@property (assign,nonatomic) long long wordPosition;              //@synthesize wordPosition=_wordPosition - In the implementation block
@property (assign,nonatomic) BOOL isShortWord;                    //@synthesize isShortWord=_isShortWord - In the implementation block
-(id)description;
-(long long)wordPosition;
-(void)reportToSession:(id)arg1 ;
-(void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2 ;
-(id)init:(id)arg1 order:(long long)arg2 ;
-(long long)_metricWordKeyPostion:(long long)arg1 ;
-(void)setWordPosition:(long long)arg1 ;
-(BOOL)isShortWord;
-(void)setIsShortWord:(BOOL)arg1 ;
@end

