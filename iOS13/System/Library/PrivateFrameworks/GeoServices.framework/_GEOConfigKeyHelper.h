/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface _GEOConfigKeyHelper : NSObject <NSCopying> {

	id _lastValue;
	NSNumber* _keyNumber;
	NSString* _keyString;
	SCD_Struct_GE191* configKey;

}

@property (nonatomic,readonly) SCD_Struct_GE191* configKey; 
@property (nonatomic,readonly) NSNumber * keyNumber;                     //@synthesize keyNumber=_keyNumber - In the implementation block
@property (nonatomic,readonly) NSString * keyString;                     //@synthesize keyString=_keyString - In the implementation block
@property (nonatomic,readonly) BOOL valueChanged; 
+(id)helperForGEOConfigKey:(SCD_Struct_GE191*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_currentValue;
-(SCD_Struct_GE191*)configKey;
-(BOOL)isEqualTo_GEOConfigKeyHelper:(id)arg1 ;
-(NSNumber *)keyNumber;
-(NSString *)keyString;
-(BOOL)valueChanged;
@end

