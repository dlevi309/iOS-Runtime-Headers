/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)value;
-(BOOL)isContainer;
-(id)jsonRepresentation;
-(BOOL)shouldAggregate;
-(id)initWithValue:(long long)arg1 shouldAggregate:(BOOL)arg2 ;
@end

