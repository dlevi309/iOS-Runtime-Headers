/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UITextPosition.h>

@interface TSDTextPosition : UITextPosition {

	unsigned long long _charIndex;
	BOOL _eolAffinity;
	float _preferredPosition;
	BOOL _isPreferredStart;

}

@property (nonatomic,readonly) unsigned long long charIndex;              //@synthesize charIndex=_charIndex - In the implementation block
@property (nonatomic,readonly) BOOL endOfLineAffinity;                    //@synthesize eolAffinity=_eolAffinity - In the implementation block
@property (nonatomic,readonly) float preferredPosition;                   //@synthesize preferredPosition=_preferredPosition - In the implementation block
@property (nonatomic,readonly) BOOL isPreferredStart;                     //@synthesize isPreferredStart=_isPreferredStart - In the implementation block
+(id)textPositionWithCharIndex:(unsigned long long)arg1 eolAffinity:(BOOL)arg2 preferredPosition:(float)arg3 isPreferredStart:(BOOL)arg4 ;
+(id)textPositionWithCharIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(int)distanceFromPosition:(id)arg1 ;
-(id)initWithCharIndex:(unsigned long long)arg1 eolAffinity:(BOOL)arg2 preferredPosition:(float)arg3 isPreferredStart:(BOOL)arg4 ;
-(id)initWithCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)charIndex;
-(BOOL)endOfLineAffinity;
-(float)preferredPosition;
-(BOOL)isPreferredStart;
@end

