/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)allPIDs;
-(BOOL)updateFromSystem;
-(void)_populateFromSystem;
-(id)newestProcInfoWithName:(id)arg1 ;
-(void)setProcInfos:(id)arg1 ;
-(void)addProcInfo:(id)arg1 ;
-(void)removeProcInfo:(id)arg1 ;
-(void)setOwnedOnly:(BOOL)arg1 ;
-(BOOL)ownedOnly:(BOOL)arg1 ;
-(void)setAppsOnly:(BOOL)arg1 ;
-(id)allProcInfos;
-(id)allPathNames;
-(id)newestProcInfo;
-(id)procInfoWithPID:(int)arg1 ;
-(unsigned long long)count;
-(BOOL)update;
-(id)allNames;
-(BOOL)appsOnly;
@end

