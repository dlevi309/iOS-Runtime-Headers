/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@interface SGSlice : NSObject {

	SCD_Struct_SG11 _type;
	unsigned long long _start;
	unsigned long long _end;

}

@property (nonatomic,readonly) SCD_Struct_SG11 type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long start;              //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) unsigned long long end;                //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) NSRange range; 
+(id)sliceWithType:(SCD_Struct_SG11)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3 ;
+(id)sliceWithType:(SCD_Struct_SG11)arg1 range:(NSRange)arg2 ;
-(long long)compare:(id)arg1 ;
-(unsigned long long)end;
-(NSRange)range;
-(unsigned long long)start;
-(id)description;
-(SCD_Struct_SG11)type;
-(id)initWithType:(SCD_Struct_SG11)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3 ;
-(id)initWithType:(SCD_Struct_SG11)arg1 range:(NSRange)arg2 ;
@end

