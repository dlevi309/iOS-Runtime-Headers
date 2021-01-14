/*
* Generated on Thursday, January 14, 2021 at 2:29:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/

#import <libobjc.A.dylib/FPAuxDataType.h>

@interface FPAuxData : NSObject <FPAuxDataType> {

	BOOL _aggregate;
	long long _value;

}

@property (nonatomic,readonly) long long value;                                    //@synthesize value=_value - In the implementation block
@property (getter=shouldAggregate,nonatomic,readonly) BOOL aggregate;              //@synthesize aggregate=_aggregate - In the implementation block
@property (nonatomic,readonly) BOOL isContainer; 
@property (nonatomic,readonly) id jsonRepresentation; 
-(BOOL)shouldAggregate;
-(BOOL)isContainer;
-(id)jsonRepresentation;
-(long long)value;
-(id)initWithValue:(long long)arg1 shouldAggregate:(BOOL)arg2 ;
@end

