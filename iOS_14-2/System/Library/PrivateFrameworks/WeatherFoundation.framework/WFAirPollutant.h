/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFAirPollutant : NSObject <NSCopying, NSSecureCoding> {

	NSString* _localizedName;
	NSString* _localizedDescription;
	double _amount;
	NSString* _unit;
	NSString* _localizedCategoryDescription;
	unsigned long long _categoryIndex;
	unsigned long long _index;

}

@property (nonatomic,copy) NSString * localizedName;                               //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                        //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (assign,nonatomic) double amount;                                        //@synthesize amount=_amount - In the implementation block
@property (nonatomic,retain) NSString * unit;                                      //@synthesize unit=_unit - In the implementation block
@property (nonatomic,retain) NSString * localizedCategoryDescription;              //@synthesize localizedCategoryDescription=_localizedCategoryDescription - In the implementation block
@property (assign,nonatomic) unsigned long long categoryIndex;                     //@synthesize categoryIndex=_categoryIndex - In the implementation block
@property (assign,nonatomic) unsigned long long index;                             //@synthesize index=_index - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLocalizedName:(NSString *)arg1 ;
-(unsigned long long)index;
-(NSString *)localizedName;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setCategoryIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)localizedDescription;
-(NSString *)unit;
-(unsigned long long)categoryIndex;
-(void)setAmount:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)amount;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)localizedCategoryDescription;
-(void)setUnit:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocalizedCategoryDescription:(NSString *)arg1 ;
@end

