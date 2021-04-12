/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/


@class NSString, NSLock;

@interface KeychainWrapper : NSObject {

	NSString* _accountName;
	NSString* _serviceName;
	NSLock* _lock;

}

@property (nonatomic,copy) NSString * accountName;              //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,copy) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSLock * lock;                     //@synthesize lock=_lock - In the implementation block
+(id)keychainWrapperWithMACAddress:(id)arg1 ;
+(id)keychainPasswordForMACAddress:(id)arg1 ;
+(void)removeKeychainPasswordForMACAddress:(id)arg1 ;
-(void)dealloc;
-(NSLock *)lock;
-(NSString *)serviceName;
-(NSString *)accountName;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setLock:(NSLock *)arg1 ;
-(void)setAccountName:(NSString *)arg1 ;
-(id)genericPasswordQuery;
-(int)addGenericPassword:(id)arg1 withLabel:(id)arg2 andDescription:(id)arg3 ;
-(void)removeGenericPassword;
-(id)initWithAccountName:(id)arg1 serviceName:(id)arg2 ;
-(id)genericPassword;
-(id)getPasswordFromQuery:(id)arg1 ;
-(id)getGenericPassword;
@end

