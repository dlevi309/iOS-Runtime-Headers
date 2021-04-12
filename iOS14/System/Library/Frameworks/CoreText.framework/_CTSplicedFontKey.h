/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
*/

#import <CoreText/CoreText-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _CTSplicedFontKey : NSObject <NSCopying> {

	unsigned long long _hash;
	BOOL _ignoreLegibilityWeight;
	unsigned _grade;
	unsigned _platform;
	NSString* _name;
	NSString* _language;
	double _lineHeightRatio;
	long long _legibilityWeight;
	unsigned long long _sizeCategory;
	NSString* _design;
	double _weight;
	double _width;

}

@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * language;                          //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) double lineHeightRatio;                       //@synthesize lineHeightRatio=_lineHeightRatio - In the implementation block
@property (assign,nonatomic) long long legibilityWeight;                   //@synthesize legibilityWeight=_legibilityWeight - In the implementation block
@property (assign,nonatomic) BOOL ignoreLegibilityWeight;                  //@synthesize ignoreLegibilityWeight=_ignoreLegibilityWeight - In the implementation block
@property (assign,nonatomic) unsigned long long sizeCategory;              //@synthesize sizeCategory=_sizeCategory - In the implementation block
@property (nonatomic,retain) NSString * design;                            //@synthesize design=_design - In the implementation block
@property (assign,nonatomic) double weight;                                //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) double width;                                 //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned grade;                               //@synthesize grade=_grade - In the implementation block
@property (assign,nonatomic) unsigned platform;                            //@synthesize platform=_platform - In the implementation block
-(unsigned)platform;
-(long long)legibilityWeight;
-(double)width;
-(unsigned)grade;
-(void)setPlatform:(unsigned)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setGrade:(unsigned)arg1 ;
-(void)setWeight:(double)arg1 ;
-(void)setLegibilityWeight:(long long)arg1 ;
-(void)setDesign:(NSString *)arg1 ;
-(void)setWidth:(double)arg1 ;
-(double)weight;
-(NSString *)name;
-(id)description;
-(BOOL)ignoreLegibilityWeight;
-(void)setSizeCategory:(unsigned long long)arg1 ;
-(double)lineHeightRatio;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)design;
-(void)setLineHeightRatio:(double)arg1 ;
-(void)setIgnoreLegibilityWeight:(BOOL)arg1 ;
-(unsigned long long)sizeCategory;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

