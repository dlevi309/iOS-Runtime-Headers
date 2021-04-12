/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSKeychainItem.h>

@class NSString, NSDate, NSNumber;

@interface VSKeychainGenericPassword : VSKeychainItem

@property (nonatomic,copy) NSString * accessGroup; 
@property (nonatomic,copy,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,copy) NSString * itemDescription; 
@property (nonatomic,copy) NSString * comment; 
@property (nonatomic,copy) NSNumber * creatorCode; 
@property (nonatomic,copy) NSNumber * typeCode; 
@property (nonatomic,copy) NSString * label; 
@property (assign,getter=isSynchronizable,nonatomic) BOOL synchronizable; 
@property (assign,getter=isInvisible,nonatomic) BOOL invisible; 
@property (assign,getter=isNegative,nonatomic) BOOL negative; 
@property (nonatomic,copy) NSString * account; 
@property (nonatomic,copy) NSString * service; 
@property (nonatomic,copy) NSString * generic; 
-(NSDate *)modificationDate;
-(void)setInvisible:(BOOL)arg1 ;
-(BOOL)isNegative;
-(NSString *)account;
-(NSString *)comment;
-(void)setComment:(NSString *)arg1 ;
-(void)setAccount:(NSString *)arg1 ;
-(BOOL)isInvisible;
-(void)setItemDescription:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(NSNumber *)typeCode;
-(void)setService:(NSString *)arg1 ;
-(void)setTypeCode:(NSNumber *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)generic;
-(NSString *)itemDescription;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(void)setNegative:(BOOL)arg1 ;
-(NSString *)label;
-(NSString *)service;
-(void)setSynchronizable:(BOOL)arg1 ;
-(NSNumber *)creatorCode;
-(void)setCreatorCode:(NSNumber *)arg1 ;
-(void)setGeneric:(NSString *)arg1 ;
-(id)_faultWhileAccessingPrimitiveValueForKey:(id)arg1 ;
-(void)_notifyWhileSettingPrimitiveValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isSynchronizable;
@end

