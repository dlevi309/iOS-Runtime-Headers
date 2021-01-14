/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SALocalSearchPhoneNumber : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * type; 
@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)phoneNumber;
+(id)phoneNumberWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setType:(NSString *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)value;
@end

