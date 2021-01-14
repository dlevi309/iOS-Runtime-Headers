/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFAQIScaleCategory : NSObject <NSCopying, NSSecureCoding> {

	NSString* _categoryName;
	NSString* _color;
	unsigned long long _categoryNumber;
	unsigned long long _categoryIndex;
	NSString* _localizedCategoryDescription;
	NSRange _range;

}

@property (nonatomic,copy) NSString * categoryName;                              //@synthesize categoryName=_categoryName - In the implementation block
@property (nonatomic,copy) NSString * color;                                     //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) unsigned long long categoryNumber;                  //@synthesize categoryNumber=_categoryNumber - In the implementation block
@property (assign,nonatomic) NSRange range;                                      //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned long long categoryIndex;                   //@synthesize categoryIndex=_categoryIndex - In the implementation block
@property (nonatomic,copy) NSString * localizedCategoryDescription;              //@synthesize localizedCategoryDescription=_localizedCategoryDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRange:(NSRange)arg1 ;
-(NSRange)range;
-(unsigned long long)categoryNumber;
-(void)setCategoryNumber:(unsigned long long)arg1 ;
-(NSString *)color;
-(void)setCategoryIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setColor:(NSString *)arg1 ;
-(unsigned long long)categoryIndex;
-(id)initWithCategoryIndex:(unsigned long long)arg1 localizedCategoryDescription:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToScaleCategory:(id)arg1 ;
-(NSString *)localizedCategoryDescription;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLocalizedCategoryDescription:(NSString *)arg1 ;
@end

