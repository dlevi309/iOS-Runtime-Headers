/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


#import <Symbolication/Symbolication-Structs.h>
@interface __VMULeaksMarkerObject : NSObject {

	SCD_Struct_VM10* _region;
	unsigned _entryIndex;

}

@property (assign,nonatomic) SCD_Struct_VM10* region;              //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) unsigned entryIndex;                  //@synthesize entryIndex=_entryIndex - In the implementation block
-(void)dealloc;
-(SCD_Struct_VM10*)region;
-(void)setRegion:(SCD_Struct_VM10*)arg1 ;
-(unsigned)entryIndex;
-(void)setEntryIndex:(unsigned)arg1 ;
@end

