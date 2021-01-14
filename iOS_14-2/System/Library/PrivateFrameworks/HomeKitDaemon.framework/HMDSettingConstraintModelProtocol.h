/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class NSNumber, NSString, NSData;


@protocol HMDSettingConstraintModelProtocol <HMDSettingModelBaseProtocol>
@property (nonatomic,copy) NSNumber * type; 
@property (nonatomic,copy) NSNumber * numberValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSData * dataValue; 
@required
-(NSNumber *)numberValue;
-(NSData *)dataValue;
-(void)setDataValue:(id)arg1;
-(void)setType:(id)arg1;
-(NSString *)stringValue;
-(void)setStringValue:(id)arg1;
-(void)setNumberValue:(id)arg1;
-(NSNumber *)type;

@end

