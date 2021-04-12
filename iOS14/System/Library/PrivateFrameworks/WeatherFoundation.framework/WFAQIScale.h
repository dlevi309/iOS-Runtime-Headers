/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface WFAQIScale : NSObject <NSCopying, NSSecureCoding> {

	BOOL _numerical;
	NSString* _identifier;
	NSString* _displayName;
	NSArray* _categories;
	NSRange _range;

}

@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                           //@synthesize displayName=_displayName - In the implementation block
@property (assign,getter=isNumerical,nonatomic) BOOL numerical;              //@synthesize numerical=_numerical - In the implementation block
@property (assign,nonatomic) NSRange range;                                  //@synthesize range=_range - In the implementation block
@property (nonatomic,copy) NSArray * categories;                             //@synthesize categories=_categories - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRange:(NSRange)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(NSRange)range;
-(NSArray *)categories;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)isNumerical;
-(void)setNumerical:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
@end

