/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class NSNumber, NSString, NSData, NSUUID;


@protocol HMDSettingModelProtocol <HMDSettingModelBaseProtocol>
@property (nonatomic,copy) NSNumber * type; 
@property (nonatomic,copy) NSNumber * properties; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSNumber * numberValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSData * dataValue; 
@property (nonatomic,copy) NSUUID * selectionIdentifier; 
@property (nonatomic,copy) NSString * selectionValue; 
@required
-(NSNumber *)numberValue;
-(NSNumber *)properties;
-(NSData *)dataValue;
-(void)setDataValue:(id)arg1;
-(void)setType:(id)arg1;
-(NSString *)stringValue;
-(NSString *)name;
-(void)setStringValue:(id)arg1;
-(void)setNumberValue:(id)arg1;
-(NSNumber *)type;
-(void)setProperties:(id)arg1;
-(void)setName:(id)arg1;
-(NSString *)selectionValue;
-(NSUUID *)selectionIdentifier;
-(void)setSelectionIdentifier:(id)arg1;
-(void)setSelectionValue:(id)arg1;
-(BOOL)setSettingValue:(id)arg1;

@end

