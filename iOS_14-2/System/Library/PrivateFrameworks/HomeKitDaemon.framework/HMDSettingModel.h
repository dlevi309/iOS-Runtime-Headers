/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitBackingStore/HMBModel.h>
#import <libobjc.A.dylib/HMDSettingModelProtocol.h>

@class NSNumber, NSString, NSData, NSUUID;

@interface HMDSettingModel : HMBModel <HMDSettingModelProtocol>

@property (nonatomic,copy) NSNumber * type; 
@property (nonatomic,copy) NSNumber * properties; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSNumber * numberValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSData * dataValue; 
@property (nonatomic,copy) NSUUID * selectionIdentifier; 
@property (nonatomic,copy) NSString * selectionValue; 
@property (nonatomic,readonly) NSUUID * hmbModelID; 
@property (nonatomic,readonly) NSUUID * hmbParentModelID; 
@property (nonatomic,readonly) NSString * nameForKeyPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hmbProperties;
-(id)copyWithNewParentModelID:(id)arg1 ;
-(NSString *)nameForKeyPath;
-(BOOL)setSettingValue:(id)arg1 ;
@end

