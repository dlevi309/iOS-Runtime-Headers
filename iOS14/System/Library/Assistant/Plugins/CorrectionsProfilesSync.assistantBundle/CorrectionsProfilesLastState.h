/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/CorrectionsProfilesSync.assistantBundle/CorrectionsProfilesSync
*/


@class CorrectionsProfilesPersistedState;

@interface CorrectionsProfilesLastState : NSObject {

	CorrectionsProfilesPersistedState* _persistedState;
	unsigned long long _count;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(unsigned long long)count;
-(id)description;
-(id)_path;
-(id)digest;
-(BOOL)loadLastState;
-(id)profileDataForKey:(id)arg1 ;
-(id)correctionKeys;
-(void)saveNewState:(id)arg1 ;
@end

