/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) NSString * familyName;               //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) long long weight;                    //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) long long style;                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long width;                     //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)attributesWithFamilyName:(id)arg1 style:(long long)arg2 weight:(long long)arg3 ;
-(NSString *)familyName;
-(long long)width;
-(long long)weight;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
@end

