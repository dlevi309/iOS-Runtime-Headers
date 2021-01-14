/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)hour;
-(void)setHour:(long long)arg1 ;
-(id)groupIdentifier;
-(long long)minute;
-(id)encodedClassName;
-(void)setMinute:(long long)arg1 ;
@end

