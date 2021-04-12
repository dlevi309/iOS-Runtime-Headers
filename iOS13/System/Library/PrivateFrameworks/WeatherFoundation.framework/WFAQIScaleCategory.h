/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFAQIScaleCategory : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _categoryIndex;
	NSString* _localizedCategoryDescription;

}

@property (nonatomic,copy,readonly) NSString * description; 
@property (nonatomic,copy,readonly) NSString * longDescription; 
@property (nonatomic,readonly) unsigned long long warningLevel; 
@property (nonatomic,copy,readonly) NSString * scaleClassName; 
@property (nonatomic,readonly) unsigned long long categoryIndex;                     //@synthesize categoryIndex=_categoryIndex - In the implementation block
@property (nonatomic,readonly) NSString * localizedCategoryDescription;              //@synthesize localizedCategoryDescription=_localizedCategoryDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)longDescription;
-(unsigned long long)warningLevel;
-(NSString *)scaleClassName;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)categoryIndex;
-(NSString *)localizedCategoryDescription;
-(BOOL)isEqualToScaleCategory:(id)arg1 ;
-(id)initWithCategoryIndex:(unsigned long long)arg1 localizedCategoryDescription:(id)arg2 ;
@end

