/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UITextRange.h>

@interface TSDTextRange : UITextRange {

	NSRange _range;
	BOOL _eolAffinity;
	float _preferredStartPosition;
	float _preferredEndPosition;

}

@property (assign,nonatomic) NSRange range;                               //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) BOOL isAtEndOfLine;                          //@synthesize eolAffinity=_eolAffinity - In the implementation block
@property (nonatomic,readonly) float preferredStartPosition;              //@synthesize preferredStartPosition=_preferredStartPosition - In the implementation block
@property (nonatomic,readonly) float preferredEndPosition;                //@synthesize preferredEndPosition=_preferredEndPosition - In the implementation block
+(id)textRangeWithRange:(NSRange)arg1 ;
+(id)textRangeWithRange:(NSRange)arg1 eolAffinity:(BOOL)arg2 preferredStartPosition:(float)arg3 preferredEndPosition:(float)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id)start;
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 ;
-(id)end;
-(void)setRange:(NSRange)arg1 ;
-(BOOL)isAtEndOfLine;
-(id)initWithRange:(NSRange)arg1 eolAffinity:(BOOL)arg2 preferredStartPosition:(float)arg3 preferredEndPosition:(float)arg4 ;
-(void)setIsAtEndOfLine:(BOOL)arg1 ;
-(float)preferredStartPosition;
-(float)preferredEndPosition;
@end

