/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@class NSString;

@interface CUINamedColor : CUINamedLookup {

	CGColorRef _cgColor;
	NSString* _colorName;
	BOOL _substituteWithSystemColor;

}

@property (nonatomic,readonly) CGColorRef cgColor; 
@property (nonatomic,readonly) BOOL substituteWithSystemColor;              //@synthesize substituteWithSystemColor=_substituteWithSystemColor - In the implementation block
@property (nonatomic,readonly) NSString * systemColorName;                  //@synthesize colorName=_colorName - In the implementation block
-(void)dealloc;
-(CGColorRef)cgColor;
-(BOOL)substituteWithSystemColor;
-(NSString *)systemColorName;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
@end

