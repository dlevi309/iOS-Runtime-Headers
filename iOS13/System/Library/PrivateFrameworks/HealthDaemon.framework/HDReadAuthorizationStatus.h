/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class _HKAuthorizationRecord, NSSet, NSString, NSNumber, NSDate, HDSQLitePredicate;

@interface HDReadAuthorizationStatus : NSObject {

	_HKAuthorizationRecord* _authorizationRecord;
	NSSet* _restrictedSourceEntities;
	NSString* _restrictedBundleIdentifier;
	NSNumber* _deletedObjectBaselineAnchor;
	NSNumber* _objectLimitAnchor;

}

@property (nonatomic,readonly) long long authorizationStatus; 
@property (nonatomic,readonly) long long authorizationRequest; 
@property (nonatomic,readonly) long long authorizationMode; 
@property (nonatomic,copy,readonly) _HKAuthorizationRecord * authorizationRecord;              //@synthesize authorizationRecord=_authorizationRecord - In the implementation block
@property (nonatomic,copy,readonly) NSSet * restrictedSourceEntities;                          //@synthesize restrictedSourceEntities=_restrictedSourceEntities - In the implementation block
@property (nonatomic,copy,readonly) NSString * restrictedBundleIdentifier;                     //@synthesize restrictedBundleIdentifier=_restrictedBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * deletedObjectBaselineAnchor;                    //@synthesize deletedObjectBaselineAnchor=_deletedObjectBaselineAnchor - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * objectLimitAnchor;                              //@synthesize objectLimitAnchor=_objectLimitAnchor - In the implementation block
@property (nonatomic,copy,readonly) NSDate * objectLimitModifiedDate; 
@property (nonatomic,readonly) BOOL canRead; 
@property (nonatomic,readonly) BOOL isAuthorizationDetermined; 
@property (nonatomic,copy,readonly) HDSQLitePredicate * authorizationPredicate; 
+(id)unrestrictedReadAuthorizationStatus;
+(id)notDerminedReadAuthorizationStatus;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)authorizationStatus;
-(long long)authorizationRequest;
-(BOOL)canRead;
-(NSSet *)restrictedSourceEntities;
-(HDSQLitePredicate *)authorizationPredicate;
-(long long)authorizationMode;
-(NSNumber *)objectLimitAnchor;
-(NSString *)restrictedBundleIdentifier;
-(_HKAuthorizationRecord *)authorizationRecord;
-(BOOL)isAuthorizationDetermined;
-(id)initWithReadAuthorizationStatus:(long long)arg1 authorizationRequest:(long long)arg2 authorizationMode:(long long)arg3 restrictedBundleIdentifier:(id)arg4 restrictedSourceEntities:(id)arg5 deletedObjectBaselineAnchor:(id)arg6 objectLimitAnchor:(id)arg7 objectLimitModifiedDate:(id)arg8 ;
-(NSDate *)objectLimitModifiedDate;
-(void)disableReading;
-(void)disableSharing;
-(NSNumber *)deletedObjectBaselineAnchor;
@end

