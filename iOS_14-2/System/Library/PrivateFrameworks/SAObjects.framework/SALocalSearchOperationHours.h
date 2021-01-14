/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, NSString;

@interface SALocalSearchOperationHours : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * operationPeriods; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)operationHoursWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)operationHours;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSDictionary *)operationPeriods;
-(void)setOperationPeriods:(NSDictionary *)arg1 ;
@end

