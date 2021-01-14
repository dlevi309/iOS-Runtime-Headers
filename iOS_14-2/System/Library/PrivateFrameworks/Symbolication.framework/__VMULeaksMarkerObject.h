/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


#import <Symbolication/Symbolication-Structs.h>
@interface __VMULeaksMarkerObject : NSObject {

	SCD_Struct_VM11* _region;
	unsigned _entryIndex;

}

@property (assign,nonatomic) SCD_Struct_VM11* region;              //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) unsigned entryIndex;                  //@synthesize entryIndex=_entryIndex - In the implementation block
-(SCD_Struct_VM11*)region;
-(void)setRegion:(SCD_Struct_VM11*)arg1 ;
-(unsigned)entryIndex;
-(void)setEntryIndex:(unsigned)arg1 ;
-(void)dealloc;
@end

