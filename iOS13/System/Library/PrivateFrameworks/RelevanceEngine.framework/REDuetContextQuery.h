/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSArray, NSSet, NSUUID, NSString, _CDContextualPredicate, _CDMDCSContextualPredicate;

@interface REDuetContextQuery : NSObject {

	NSArray* _searchKeyPaths;
	/*^block*/id _evalBlock;
	NSSet* _devices;
	NSUUID* _uuid;
	NSString* _name;
	_CDContextualPredicate* _predicate;
	_CDMDCSContextualPredicate* _remotePredicate;

}

@property (nonatomic,readonly) NSUUID * uuid;                                             //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) _CDContextualPredicate * predicate;                        //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) _CDMDCSContextualPredicate * remotePredicate;              //@synthesize remotePredicate=_remotePredicate - In the implementation block
@property (nonatomic,readonly) NSString * registrationID; 
@property (nonatomic,readonly) NSSet * keyPaths; 
@property (nonatomic,retain) NSSet * devices;                                             //@synthesize devices=_devices - In the implementation block
-(NSString *)name;
-(_CDContextualPredicate *)predicate;
-(NSUUID *)uuid;
-(NSSet *)devices;
-(void)setDevices:(NSSet *)arg1 ;
-(NSSet *)keyPaths;
-(id)initWithPredicate:(id)arg1 remotePredicate:(id)arg2 name:(id)arg3 evaluationBlock:(/*^block*/id)arg4 ;
-(NSString *)registrationID;
-(id)_localRegistrationWithCallback:(/*^block*/id)arg1 ;
-(id)_remoteRegistrationForDevice:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)_sortedKeyPaths:(id)arg1 ;
-(id)_keyPathsForDevice:(id)arg1 ;
-(id)_localKeyPaths;
-(id)createRegistrationsWithCallback:(/*^block*/id)arg1 ;
-(id)valueFromUserContext:(id)arg1 ;
-(_CDMDCSContextualPredicate *)remotePredicate;
@end

