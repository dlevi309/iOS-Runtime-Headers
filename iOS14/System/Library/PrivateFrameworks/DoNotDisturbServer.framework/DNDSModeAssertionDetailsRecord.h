/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/DNDSModeAssertionStoreRecordDictionaryEncoding.h>

@class NSString, NSNumber, DNDSModeAssertionLifetimeRecord;

@interface DNDSModeAssertionDetailsRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding> {

	NSString* _identifier;
	NSString* _modeIdentifier;
	NSNumber* _userVisibleEndDate;
	DNDSModeAssertionLifetimeRecord* _lifetime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * modeIdentifier;                               //@synthesize modeIdentifier=_modeIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * userVisibleEndDate;                           //@synthesize userVisibleEndDate=_userVisibleEndDate - In the implementation block
@property (nonatomic,retain) DNDSModeAssertionLifetimeRecord * lifetime;              //@synthesize lifetime=_lifetime - In the implementation block
+(id)recordForDictionary:(id)arg1 keys:(const SCD_Struct_DN9*)arg2 ;
+(id)recordForAssertionDetails:(id)arg1 ;
-(void)setLifetime:(DNDSModeAssertionLifetimeRecord *)arg1 ;
-(DNDSModeAssertionLifetimeRecord *)lifetime;
-(id)object;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)modeIdentifier;
-(void)setUserVisibleEndDate:(NSNumber *)arg1 ;
-(NSNumber *)userVisibleEndDate;
-(void)setModeIdentifier:(NSString *)arg1 ;
-(id)dictionaryWithKeys:(const SCD_Struct_DN9*)arg1 options:(unsigned long long)arg2 ;
@end

