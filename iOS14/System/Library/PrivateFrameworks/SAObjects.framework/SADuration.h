/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SADuration : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * unit; 
@property (nonatomic,copy) NSNumber * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)durationWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)duration;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setValue:(NSNumber *)arg1 ;
-(NSString *)unit;
-(void)setUnit:(NSString *)arg1 ;
-(NSNumber *)value;
@end

