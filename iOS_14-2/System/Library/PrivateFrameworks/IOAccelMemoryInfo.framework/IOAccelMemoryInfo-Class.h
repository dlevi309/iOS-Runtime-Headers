/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)collectDataWithCompletionQueue:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)validateDictionary:(id)arg1 ;
+(void)purgeAllVidMem;
+(void)newKernelAllocationTotals:(id)arg1 totalsReturn:(id)arg2 errorReturn:(id)arg3 ;
+(id)newKernelAllocationList:(id)arg1 ;
+(void)collectAllocationTotalsWithOptions:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(unsigned long long)memoryPool;
-(NSArray *)devices;
-(BOOL)wired;
-(unsigned long long)length;
-(unsigned)surfaceID;
-(NSArray *)mappings;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)purgeable;
-(id)description;
-(void)dealloc;
-(BOOL)orphaned;
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

