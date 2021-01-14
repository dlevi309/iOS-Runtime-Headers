/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAlarmObject.h>
#import <SAObjects/SASyncWrap.h>

@class NSNumber, NSURL, NSString;

@interface SAAlarmAceAlarmWrap : SAAlarmObject <SASyncWrap>

@property (nonatomic,copy) NSNumber * generation; 
@property (nonatomic,copy) NSURL * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceAlarmWrap;
+(id)aceAlarmWrapWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setGeneration:(NSNumber *)arg1 ;
-(NSNumber *)generation;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

