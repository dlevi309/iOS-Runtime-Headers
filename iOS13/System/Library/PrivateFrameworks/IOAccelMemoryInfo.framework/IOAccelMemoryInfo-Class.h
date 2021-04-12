/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
*/


@class NSDictionary, NSArray, NSSet;

@interface IOAccelMemoryInfo : NSObject {

	NSDictionary* dict;
	id _expansionData;

}

@property (readonly) unsigned long long memoryPool; 
@property (readonly) unsigned long long length; 
@property (readonly) unsigned long long residentLength; 
@property (readonly) unsigned long long dirtyLength; 
@property (readonly) BOOL wired; 
@property (readonly) BOOL cachedCopy; 
@property (readonly) BOOL cacheDirty; 
@property (readonly) BOOL purgeable; 
@property (readonly) BOOL orphaned; 
@property (readonly) NSArray * devices; 
@property (readonly) unsigned surfaceID; 
@property (readonly) NSSet * processIDs; 
@property (readonly) NSSet * blamedProcesses; 
@property (readonly) NSArray * mappings; 
@property (readonly) NSArray * openglObjects; 
@property (readonly) NSArray * openclObjects; 
@property (readonly) NSArray * formattedDescriptions; 
+(void)collectAllocationTotalsWithOptions:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)validateDictionary:(id)arg1 ;
+(id)newKernelAllocationList:(id)arg1 ;
+(void)newKernelAllocationTotals:(id)arg1 totalsReturn:(id)arg2 errorReturn:(id)arg3 ;
+(void)collectDataWithCompletionQueue:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)purgeAllVidMem;
-(void)dealloc;
-(unsigned long long)length;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)devices;
-(NSArray *)mappings;
-(unsigned)surfaceID;
-(BOOL)purgeable;
-(unsigned long long)memoryPool;
-(BOOL)orphaned;
-(BOOL)wired;
-(BOOL)cachedCopy;
-(BOOL)cacheDirty;
-(NSArray *)openglObjects;
-(NSArray *)openclObjects;
-(unsigned long long)dirtyLength;
-(unsigned long long)residentLength;
-(NSSet *)processIDs;
-(NSSet *)blamedProcesses;
-(id)blamedProcessesForProcess:(int)arg1 ;
-(NSArray *)formattedDescriptions;
@end

