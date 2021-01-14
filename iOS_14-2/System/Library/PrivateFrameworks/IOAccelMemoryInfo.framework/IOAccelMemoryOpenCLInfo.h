/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)pid;
-(NSString *)objectType;
-(void)setObjectType:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)cl_mem;
-(void)setPid:(int)arg1 ;
-(void)dealloc;
-(NSString *)objectDescription;
-(void)setObjectDescription:(NSString *)arg1 ;
-(NSString *)cl_context;
-(void)setCl_context:(NSString *)arg1 ;
-(void)setCl_mem:(unsigned long long)arg1 ;
@end

