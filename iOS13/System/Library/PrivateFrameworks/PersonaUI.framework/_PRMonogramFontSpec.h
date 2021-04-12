/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
*/


@class NSString;

@interface _PRMonogramFontSpec : NSObject {

	NSString* _fontName;
	double _baseSize;
	double _tracking;

}

@property (nonatomic,readonly) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) double baseSize;                  //@synthesize baseSize=_baseSize - In the implementation block
@property (nonatomic,readonly) double tracking;                  //@synthesize tracking=_tracking - In the implementation block
+(id)specForFontWithName:(id)arg1 baseSize:(double)arg2 tracking:(double)arg3 ;
-(NSString *)fontName;
-(double)tracking;
-(double)baseSize;
@end

