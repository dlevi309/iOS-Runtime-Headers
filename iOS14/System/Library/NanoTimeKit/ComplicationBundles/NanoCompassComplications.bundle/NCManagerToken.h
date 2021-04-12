/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
*/

#import <NanoCompassComplications/NanoCompassComplications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NCManagerToken : NSObject <NSCopying> {

	unsigned long long _value;

}

@property (nonatomic,readonly) unsigned long long value;              //@synthesize value=_value - In the implementation block
+(id)tokenWithValue:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)value;
-(BOOL)isEqual:(id)arg1 ;
@end

