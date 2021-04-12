/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPContainer.h>

@class NSMutableSet;

@interface MSPHistoryContainer : MSPContainer {

	NSMutableSet* _dependents;

}
+(id)sharedLocalContainer;
+(id)sharedRemoteContainer;
-(void)addDependent:(id)arg1 ;
-(void)removeDependent:(id)arg1 ;
-(id)queryWithDelegate:(id)arg1 ;
-(void)_processNewEditedContents:(id)arg1 ;
-(void)_processNewLoadedContents:(id)arg1 ;
-(void)_commitEditWithFinalContents:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

