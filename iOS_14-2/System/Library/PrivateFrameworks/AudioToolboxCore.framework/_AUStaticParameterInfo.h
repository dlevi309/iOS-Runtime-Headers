/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface _AUStaticParameterInfo : NSObject <NSSecureCoding> {

	float _minValue;
	float _maxValue;
	unsigned _unit;
	unsigned _flags;
	unsigned _clumpID;
	float _defaultValue;
	unsigned _originalOrder;
	NSString* _unitName;
	NSArray* _valueStrings;

}

@property (assign,nonatomic) float minValue;                      //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) float maxValue;                      //@synthesize maxValue=_maxValue - In the implementation block
@property (assign,nonatomic) unsigned unit;                       //@synthesize unit=_unit - In the implementation block
@property (nonatomic,retain) NSString * unitName;                 //@synthesize unitName=_unitName - In the implementation block
@property (assign,nonatomic) unsigned flags;                      //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSArray * valueStrings;              //@synthesize valueStrings=_valueStrings - In the implementation block
@property (assign,nonatomic) unsigned clumpID;                    //@synthesize clumpID=_clumpID - In the implementation block
@property (assign,nonatomic) float defaultValue;                  //@synthesize defaultValue=_defaultValue - In the implementation block
@property (assign,nonatomic) unsigned originalOrder;              //@synthesize originalOrder=_originalOrder - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMaxValue:(float)arg1 ;
-(void)setDefaultValue:(float)arg1 ;
-(float)defaultValue;
-(unsigned)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)clumpID;
-(void)setClumpID:(unsigned)arg1 ;
-(void)setUnitName:(NSString *)arg1 ;
-(NSArray *)valueStrings;
-(void)setValueStrings:(NSArray *)arg1 ;
-(unsigned)originalOrder;
-(void)setOriginalOrder:(unsigned)arg1 ;
-(unsigned)unit;
-(void)setMinValue:(float)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(NSString *)unitName;
-(id)initWithCoder:(id)arg1 ;
-(void)setUnit:(unsigned)arg1 ;
-(float)maxValue;
-(float)minValue;
-(void)dealloc;
@end

