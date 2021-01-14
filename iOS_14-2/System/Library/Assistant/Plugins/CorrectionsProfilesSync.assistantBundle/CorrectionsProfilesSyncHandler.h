/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/CorrectionsProfilesSync.assistantBundle/CorrectionsProfilesSync
*/

#import <libobjc.A.dylib/AFSyncHandler.h>

@class NSDictionary, NSMutableArray, CorrectionsProfilesLastState, NSString;

@interface CorrectionsProfilesSyncHandler : NSObject <AFSyncHandler> {

	NSDictionary* _correctionProfiles;
	NSMutableArray* _correctionProfileKeysToSync;
	NSMutableArray* _correctionProfileKeysToDelete;
	CorrectionsProfilesLastState* _lastState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(long long)arg3 forKey:(id)arg4 beginInfo:(id)arg5 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)syncDidEnd;
-(void)_loadCorrectionProfiles;
@end

