/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXFontAttributes.h>

@class NSString;

@interface SXFontAttributes : NSObject <SXFontAttributes> {

	NSString* _familyName;
	long long _weight;
	long long _width;
	long long _style;

}

@property (nonatomic,readonly) NSString * familyName;               //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) long long weight;                    //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) long long style;                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long width;                     //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)familyName;
-(long long)width;
-(long long)weight;
-(NSString *)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithFamilyName:(id)arg1 weight:(long long)arg2 width:(long long)arg3 style:(long long)arg4 ;
-(id)stringForWeight:(long long)arg1 ;
-(id)stringForWidth:(long long)arg1 ;
-(id)stringForStyle:(long long)arg1 ;
@end

