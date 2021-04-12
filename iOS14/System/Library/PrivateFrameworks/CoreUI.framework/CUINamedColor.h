/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)substituteWithSystemColor;
-(NSString *)systemColorName;
-(CGColorRef)cgColor;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(void)dealloc;
@end

