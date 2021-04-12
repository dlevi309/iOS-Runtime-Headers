/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


@class NSLock, NSMutableDictionary;

@interface VMUProcList : NSObject {

	NSLock* procLock;
	NSMutableDictionary* allProcs;
	NSMutableDictionary* filteredProcs;
	BOOL appsOnly;
	BOOL ownedOnly;

}
-(id)init;
-(unsigned long long)count;
-(BOOL)update;
-(id)allNames;
-(BOOL)updateFromSystem;
-(void)_populateFromSystem;
-(id)newestProcInfoWithName:(id)arg1 ;
-(void)setProcInfos:(id)arg1 ;
-(void)addProcInfo:(id)arg1 ;
-(void)removeProcInfo:(id)arg1 ;
-(void)setOwnedOnly:(BOOL)arg1 ;
-(BOOL)ownedOnly:(BOOL)arg1 ;
-(void)setAppsOnly:(BOOL)arg1 ;
-(BOOL)appsOnly;
-(id)allProcInfos;
-(id)allPIDs;
-(id)allPathNames;
-(id)newestProcInfo;
-(id)procInfoWithPID:(int)arg1 ;
@end

