/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SALocalSearchPeriod.h>

@class NSString;

@interface SALocalSearchNamedPeriod : AceObject <SALocalSearchPeriod>

@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)namedPeriod;
+(id)namedPeriodWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
@end

