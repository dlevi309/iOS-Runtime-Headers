/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)deviceFixingProblems;
-(void)setDeviceFixingProblems:(BOOL)arg1 ;
@end

