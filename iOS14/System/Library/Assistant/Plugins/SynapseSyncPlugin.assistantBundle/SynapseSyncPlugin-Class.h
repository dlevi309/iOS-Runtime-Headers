/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/SynapseSyncPlugin.assistantBundle/SynapseSyncPlugin
*/

#import <libobjc.A.dylib/AFSyncHandler.h>

@class NSMutableDictionary, NSEnumerator, NSString;

@interface SynapseSyncPlugin : NSObject <AFSyncHandler> {

	NSMutableDictionary* _deletedIDs;
	NSMutableDictionary* _newItems;
	NSEnumerator* _anchorEnumerator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_clearChangeInfo;
-(BOOL)_checkIfResetIsNeededForSyncTransaction:(id)arg1 validity:(id)arg2 serverCountOfItems:(long long)arg3 startAnchorFromServer:(id)arg4 ;
-(id)_prepareToVendChangeInfoForSyncTransaction:(id)arg1 startAnchorFromServer:(id)arg2 ;
-(void)beginSyncWithInfo:(id)arg1 configuration:(id)arg2 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
@end

