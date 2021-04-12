/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
*/


@class NSString;

@interface IOAccelMemoryOpenCLInfo : NSObject {

	int pid;
	NSString* cl_context;
	unsigned long long cl_mem;
	NSString* objectType;
	NSString* objectDescription;
	id _expansionData;

}

@property (assign) int pid; 
@property (retain) NSString * cl_context; 
@property (assign) unsigned long long cl_mem; 
@property (retain) NSString * objectType; 
@property (retain) NSString * objectDescription; 
-(void)dealloc;
-(id)description;
-(NSString *)objectType;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(void)setObjectType:(NSString *)arg1 ;
-(NSString *)objectDescription;
-(void)setObjectDescription:(NSString *)arg1 ;
-(NSString *)cl_context;
-(unsigned long long)cl_mem;
-(void)setCl_context:(NSString *)arg1 ;
-(void)setCl_mem:(unsigned long long)arg1 ;
@end

