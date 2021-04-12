/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/

#import <SAObjects/AceObject.h>
#import <libobjc.A.dylib/SAAceSerializable.h>

@class CFCBNightShiftTransitionTime, NSString;

@interface CFCBNightShiftSchedule : AceObject <SAAceSerializable>

@property (nonatomic,retain) CFCBNightShiftTransitionTime * fromTime; 
@property (nonatomic,retain) CFCBNightShiftTransitionTime * toTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)nightShiftSchedule;
+(id)nightShiftScheduleWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(CFCBNightShiftTransitionTime *)fromTime;
-(CFCBNightShiftTransitionTime *)toTime;
-(void)setFromTime:(CFCBNightShiftTransitionTime *)arg1 ;
-(void)setToTime:(CFCBNightShiftTransitionTime *)arg1 ;
@end

