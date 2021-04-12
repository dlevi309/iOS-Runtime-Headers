/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)flags;
-(unsigned)unit;
-(void)setFlags:(unsigned)arg1 ;
-(float)maxValue;
-(void)setMaxValue:(float)arg1 ;
-(void)setUnit:(unsigned)arg1 ;
-(float)minValue;
-(NSArray *)valueStrings;
-(NSString *)unitName;
-(void)setMinValue:(float)arg1 ;
-(void)setUnitName:(NSString *)arg1 ;
-(void)setValueStrings:(NSArray *)arg1 ;
-(unsigned)clumpID;
-(void)setClumpID:(unsigned)arg1 ;
@end

