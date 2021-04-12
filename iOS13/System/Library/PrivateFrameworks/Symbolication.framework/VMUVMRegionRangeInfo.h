/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


#import <Symbolication/Symbolication-Structs.h>
@interface VMUVMRegionRangeInfo : NSObject {

	unsigned long long address;
	unsigned long long size;
	unsigned long long stackIdentifier;
	unsigned userTag;

}

@property (assign) unsigned long long address; 
@property (assign) unsigned long long size; 
@property (readonly) VMURange range; 
@property (assign) unsigned long long stackIdentifier; 
@property (assign) unsigned userTag; 
-(id)init;
-(unsigned long long)size;
-(unsigned long long)address;
-(VMURange)range;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setAddress:(unsigned long long)arg1 ;
-(unsigned long long)stackIdentifier;
-(void)setStackIdentifier:(unsigned long long)arg1 ;
-(unsigned)userTag;
-(void)setUserTag:(unsigned)arg1 ;
@end

