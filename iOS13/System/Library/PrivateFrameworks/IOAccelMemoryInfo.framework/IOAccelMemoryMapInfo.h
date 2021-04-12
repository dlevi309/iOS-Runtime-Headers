/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
*/


@interface IOAccelMemoryMapInfo : NSObject {

	int pid;
	unsigned long long address;
	id _expansionData;

}

@property (assign) int pid; 
@property (assign) unsigned long long address; 
-(unsigned long long)address;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(void)setAddress:(unsigned long long)arg1 ;
@end

