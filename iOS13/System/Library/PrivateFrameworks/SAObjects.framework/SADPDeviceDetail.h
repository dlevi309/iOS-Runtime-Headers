/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setOwner:(SAPerson *)arg1 ;
-(id)groupIdentifier;
-(SAPerson *)owner;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSString *)deviceClass;
-(NSString *)emoji;
-(void)setEmoji:(NSString *)arg1 ;
-(NSString *)productName;
-(void)setProductName:(NSString *)arg1 ;
-(NSString *)deviceId;
-(void)setDeviceClass:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setDeviceId:(NSString *)arg1 ;
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
@end

