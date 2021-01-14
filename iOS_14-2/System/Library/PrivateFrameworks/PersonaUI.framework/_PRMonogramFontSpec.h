/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

