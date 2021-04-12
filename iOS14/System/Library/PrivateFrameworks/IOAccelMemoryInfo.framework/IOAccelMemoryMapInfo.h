/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
*/


@interface IOAccelMemoryMapInfo : NSObject {

	int pid;
	unsigned long long address;
	id _expansionData;

}

@property (assign) int pid; 
@property (assign) unsigned long long address; 
-(int)pid;
-(unsigned long long)address;
-(void)setAddress:(unsigned long long)arg1 ;
-(void)setPid:(int)arg1 ;
@end

