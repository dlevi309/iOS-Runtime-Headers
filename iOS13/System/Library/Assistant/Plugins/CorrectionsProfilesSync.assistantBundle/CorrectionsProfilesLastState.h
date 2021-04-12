/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/CorrectionsProfilesSync.assistantBundle/CorrectionsProfilesSync
*/


@class CorrectionsProfilesPersistedState;

@interface CorrectionsProfilesLastState : NSObject {

	CorrectionsProfilesPersistedState* _persistedState;
	unsigned long long _count;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(id)description;
-(unsigned long long)count;
-(id)_path;
-(id)digest;
-(BOOL)loadLastState;
-(id)profileDataForKey:(id)arg1 ;
-(id)correctionKeys;
-(void)saveNewState:(id)arg1 ;
@end

