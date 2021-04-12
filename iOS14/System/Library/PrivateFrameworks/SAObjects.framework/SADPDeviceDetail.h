/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAPerson, NSArray;

@interface SADPDeviceDetail : SADomainObject <SAAceSerializable>

@property (assign,nonatomic) BOOL canPlaySound; 
@property (nonatomic,copy) NSString * deviceClass; 
@property (nonatomic,copy) NSString * deviceId; 
@property (nonatomic,copy) NSString * deviceLocality; 
@property (nonatomic,copy) NSString * deviceName; 
@property (nonatomic,copy) NSString * emoji; 
@property (assign,nonatomic) BOOL foundNearby; 
@property (nonatomic,retain) SAPerson * owner; 
@property (nonatomic,copy) NSString * productName; 
@property (nonatomic,copy) NSArray * productTypes; 
@property (assign,nonatomic) BOOL thisDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deviceDetail;
+(id)deviceDetailWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)emoji;
-(NSString *)deviceName;
-(NSString *)productName;
-(id)groupIdentifier;
-(SAPerson *)owner;
-(void)setProductName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)deviceClass;
-(BOOL)canPlaySound;
-(void)setCanPlaySound:(BOOL)arg1 ;
-(NSString *)deviceLocality;
-(void)setDeviceLocality:(NSString *)arg1 ;
-(BOOL)foundNearby;
-(void)setFoundNearby:(BOOL)arg1 ;
-(NSArray *)productTypes;
-(void)setProductTypes:(NSArray *)arg1 ;
-(BOOL)thisDevice;
-(void)setThisDevice:(BOOL)arg1 ;
-(void)setDeviceId:(NSString *)arg1 ;
-(void)setDeviceClass:(NSString *)arg1 ;
-(void)setEmoji:(NSString *)arg1 ;
-(void)setOwner:(SAPerson *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceId;
@end

