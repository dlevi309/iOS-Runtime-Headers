/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXFontAttributes.h>
#import <libobjc.A.dylib/SXFontAttributes.h>

@class NSString;

@interface SXTextSourceFontAttributes : SXFontAttributes <SXFontAttributes> {

	NSString* _familyName;
	long long _style;
	long long _weight;
	long long _width;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * familyName;               //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) long long weight;                    //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) long long style;                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long width;                     //@synthesize width=_width - In the implementation block
+(id)attributesWithFamilyName:(id)arg1 style:(long long)arg2 weight:(long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)familyName;
-(long long)style;
-(long long)width;
-(long long)weight;
@end

