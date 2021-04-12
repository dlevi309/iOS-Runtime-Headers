/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDate *)creationDate;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(NSNumber *)typeCode;
-(void)setTypeCode:(NSNumber *)arg1 ;
-(NSString *)service;
-(NSString *)comment;
-(BOOL)isInvisible;
-(void)setComment:(NSString *)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(void)setInvisible:(BOOL)arg1 ;
-(BOOL)isNegative;
-(NSString *)itemDescription;
-(void)setItemDescription:(NSString *)arg1 ;
-(void)setNegative:(BOOL)arg1 ;
-(NSString *)generic;
-(void)setCreatorCode:(NSNumber *)arg1 ;
-(void)setGeneric:(NSString *)arg1 ;
-(void)setSynchronizable:(BOOL)arg1 ;
-(id)_faultWhileAccessingPrimitiveValueForKey:(id)arg1 ;
-(void)_notifyWhileSettingPrimitiveValue:(id)arg1 forKey:(id)arg2 ;
-(NSNumber *)creatorCode;
-(BOOL)isSynchronizable;
@end

