/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSString, NSData;

@interface ENSSKeychainQuery : NSObject {

	NSString* _account;
	NSString* _service;
	NSString* _label;
	NSData* _passwordData;
	NSString* _accessGroup;
	unsigned long long _synchronizationMode;

}

@property (nonatomic,copy) NSString * account;                                    //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSString * service;                                    //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * label;                                      //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * accessGroup;                                //@synthesize accessGroup=_accessGroup - In the implementation block
@property (assign,nonatomic) unsigned long long synchronizationMode;              //@synthesize synchronizationMode=_synchronizationMode - In the implementation block
@property (nonatomic,copy) NSData * passwordData;                                 //@synthesize passwordData=_passwordData - In the implementation block
@property (nonatomic,copy) id<NSCoding> passwordObject; 
@property (nonatomic,copy) NSString * password; 
+(id)errorWithCode:(int)arg1 ;
+(BOOL)isSynchronizationAvailable;
-(BOOL)save:(id*)arg1 ;
-(id)query;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(BOOL)fetch:(id*)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(id)fetchAll:(id*)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)service;
-(BOOL)deleteItem:(id*)arg1 ;
-(void)setPasswordObject:(id<NSCoding>)arg1 ;
-(id<NSCoding>)passwordObject;
-(NSData *)passwordData;
-(void)setPasswordData:(NSData *)arg1 ;
-(unsigned long long)synchronizationMode;
-(void)setSynchronizationMode:(unsigned long long)arg1 ;
@end

