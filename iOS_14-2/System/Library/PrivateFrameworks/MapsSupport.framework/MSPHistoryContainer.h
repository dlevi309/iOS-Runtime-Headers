/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPContainer.h>

@class NSMutableSet;

@interface MSPHistoryContainer : MSPContainer {

	NSMutableSet* _dependents;

}
+(id)sharedRemoteContainer;
+(id)sharedLocalContainer;
-(void)addDependent:(id)arg1 ;
-(void)removeDependent:(id)arg1 ;
-(id)queryWithDelegate:(id)arg1 ;
-(void)_processNewEditedContents:(id)arg1 ;
-(void)_processNewLoadedContents:(id)arg1 ;
-(void)_commitEditWithFinalContents:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

