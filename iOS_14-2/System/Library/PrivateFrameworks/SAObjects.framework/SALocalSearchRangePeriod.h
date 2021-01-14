/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SALocalSearchPeriod.h>

@class NSString;

@interface SALocalSearchRangePeriod : AceObject <SALocalSearchPeriod>

@property (assign,nonatomic) long long endSecondsSinceMidnight; 
@property (assign,nonatomic) long long startSecondsSinceMidnight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rangePeriod;
+(id)rangePeriodWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)endSecondsSinceMidnight;
-(void)setEndSecondsSinceMidnight:(long long)arg1 ;
-(long long)startSecondsSinceMidnight;
-(void)setStartSecondsSinceMidnight:(long long)arg1 ;
@end

