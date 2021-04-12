/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)notDerminedReadAuthorizationStatus;
+(id)unrestrictedReadAuthorizationStatus;
-(void)disableSharing;
-(long long)authorizationStatus;
-(BOOL)canRead;
-(NSDate *)objectLimitModifiedDate;
-(_HKAuthorizationRecord *)authorizationRecord;
-(id)description;
-(id)initWithReadAuthorizationStatus:(long long)arg1 authorizationRequest:(long long)arg2 authorizationMode:(long long)arg3 restrictedBundleIdentifier:(id)arg4 restrictedSourceEntities:(id)arg5 deletedObjectBaselineAnchor:(id)arg6 objectLimitAnchor:(id)arg7 objectLimitModifiedDate:(id)arg8 ;
-(void)disableReading;
-(BOOL)isAuthorizationDetermined;
-(NSNumber *)deletedObjectBaselineAnchor;
-(long long)authorizationMode;
-(unsigned long long)hash;
-(NSNumber *)objectLimitAnchor;
-(long long)authorizationRequest;
-(HDSQLitePredicate *)authorizationPredicate;
-(NSSet *)restrictedSourceEntities;
-(NSString *)restrictedBundleIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

