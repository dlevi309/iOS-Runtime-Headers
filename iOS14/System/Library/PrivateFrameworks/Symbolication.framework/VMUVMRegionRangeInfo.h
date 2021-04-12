/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(VMURange)range;
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(unsigned)userTag;
-(unsigned long long)address;
-(void)setAddress:(unsigned long long)arg1 ;
-(unsigned long long)stackIdentifier;
-(void)setStackIdentifier:(unsigned long long)arg1 ;
-(void)setUserTag:(unsigned)arg1 ;
@end

