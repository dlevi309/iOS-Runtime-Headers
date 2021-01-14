/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)keyPaths;
-(NSSet *)devices;
-(NSUUID *)uuid;
-(void)setDevices:(NSSet *)arg1 ;
-(_CDContextualPredicate *)predicate;
-(NSString *)name;
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

