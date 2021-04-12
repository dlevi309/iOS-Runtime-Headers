/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSString;

@interface HKTokenKeychainItem : NSObject {

	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)_fetchTokenIdentifiedByName:(id)arg1 error:(id*)arg2 ;
+(BOOL)_storeTokenIdentifiedByName:(id)arg1 data:(id)arg2 error:(out id*)arg3 ;
+(BOOL)_deleteTokenIdentifiedByName:(id)arg1 error:(out id*)arg2 ;
+(id)tokenKeychainItemSecurityClass;
+(id)_identifyingAttributesForKeyIdentifiedByName:(id)arg1 ;
+(id)_keyQueryAttributesForKeyIdentifiedByName:(id)arg1 ;
+(id)_storableAttributesForKeyIdentifiedByName:(id)arg1 data:(id)arg2 modificationDate:(id)arg3 ;
-(id)init;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(BOOL)deleteWithError:(id*)arg1 ;
-(id)fetchWithError:(id*)arg1 ;
-(BOOL)storeToken:(id)arg1 error:(id*)arg2 ;
@end

