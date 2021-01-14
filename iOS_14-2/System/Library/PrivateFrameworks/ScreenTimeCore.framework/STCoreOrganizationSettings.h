/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STUniquedManagedObject.h>
#import <libobjc.A.dylib/STUniquelySerializableManagedObject.h>

@class STCoreUser, NSString;

@interface STCoreOrganizationSettings : STUniquedManagedObject <STUniquelySerializableManagedObject>

@property (nonatomic,retain) STCoreUser * user; 
@property (nonatomic,copy) NSString * passcode; 
@property (assign,nonatomic) BOOL allLimitsEnabled; 
@property (assign,nonatomic) long long communicationPolicy; 
@property (assign,nonatomic) long long communicationWhileLimitedPolicy; 
@property (assign,nonatomic) long long contactManagementState; 
@property (assign,nonatomic) BOOL needsToSetPasscode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchResultsRequestsForChangesToOrganizationSettingsForUserWithDSID:(id)arg1 ;
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)dictionaryRepresentation;
-(NSString *)description;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)redactedDescription;
-(void)_changeAppLimitsFromAskToWarn:(id)arg1 ;
@end

