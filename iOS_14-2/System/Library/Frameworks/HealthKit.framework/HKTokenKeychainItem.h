/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSString;

@interface HKTokenKeychainItem : NSObject {

	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)_fetchTokenIdentifiedByName:(id)arg1 error:(id*)arg2 ;
+(BOOL)_deleteTokenIdentifiedByName:(id)arg1 error:(out id*)arg2 ;
+(BOOL)_storeTokenIdentifiedByName:(id)arg1 data:(id)arg2 error:(out id*)arg3 ;
+(id)tokenKeychainItemSecurityClass;
+(id)_identifyingAttributesForKeyIdentifiedByName:(id)arg1 ;
+(id)_keyQueryAttributesForKeyIdentifiedByName:(id)arg1 ;
+(id)_storableAttributesForKeyIdentifiedByName:(id)arg1 data:(id)arg2 modificationDate:(id)arg3 ;
-(id)init;
-(BOOL)storeToken:(id)arg1 error:(id*)arg2 ;
-(id)fetchWithError:(id*)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(BOOL)deleteWithError:(id*)arg1 ;
@end

