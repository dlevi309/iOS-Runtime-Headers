/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isEqualTo_GEOConfigKeyHelper:(id)arg1 ;
-(NSString *)keyString;
-(SCD_Struct_GE191*)configKey;
-(BOOL)valueChanged;
-(id)description;
-(NSNumber *)keyNumber;
-(unsigned long long)hash;
-(id)_currentValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

