/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSArray, NSString;

@interface SAErrorIndicatorStatus : AceObject <SABackgroundContextObject>

@property (assign,nonatomic) BOOL deviceFixingProblems; 
@property (nonatomic,copy) NSArray * values; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorIndicatorStatus;
+(id)errorIndicatorStatusWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)values;
-(void)setValues:(NSArray *)arg1 ;
-(BOOL)deviceFixingProblems;
-(void)setDeviceFixingProblems:(BOOL)arg1 ;
@end

