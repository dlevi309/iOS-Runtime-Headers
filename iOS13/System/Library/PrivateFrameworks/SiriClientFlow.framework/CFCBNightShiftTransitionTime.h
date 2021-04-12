/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/

#import <SAObjects/AceObject.h>
#import <libobjc.A.dylib/SAAceSerializable.h>

@class NSString;

@interface CFCBNightShiftTransitionTime : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long hour; 
@property (assign,nonatomic) long long minute; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)nightShiftTransitionTime;
+(id)nightShiftTransitionTimeWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setHour:(long long)arg1 ;
-(void)setMinute:(long long)arg1 ;
-(long long)hour;
-(long long)minute;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

