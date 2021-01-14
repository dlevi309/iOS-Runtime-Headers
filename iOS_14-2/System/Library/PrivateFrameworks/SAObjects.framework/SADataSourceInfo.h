/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SADataSourceInfo : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * contextIdentifier; 
@property (nonatomic,copy) NSString * proximityHint; 
@property (nonatomic,copy) NSString * sourceDeviceOwnership; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)proximityHint;
-(void)setProximityHint:(NSString *)arg1 ;
-(NSString *)sourceDeviceOwnership;
-(void)setSourceDeviceOwnership:(NSString *)arg1 ;
-(void)setContextIdentifier:(NSString *)arg1 ;
-(NSString *)contextIdentifier;
@end

