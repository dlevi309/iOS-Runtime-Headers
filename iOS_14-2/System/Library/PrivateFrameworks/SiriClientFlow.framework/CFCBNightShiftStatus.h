/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/

#import <SAObjects/SADomainCommand.h>
#import <libobjc.A.dylib/SAAceSerializable.h>

@class NSString, CFCBNightShiftSchedule;

@interface CFCBNightShiftStatus : SADomainCommand <SAAceSerializable>

@property (assign,nonatomic) BOOL active; 
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,copy) NSString * nightShiftMode; 
@property (nonatomic,retain) CFCBNightShiftSchedule * nightShiftSchedule; 
@property (assign,nonatomic) BOOL sunSchedulePermitted; 
@property (assign,nonatomic) BOOL supported; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)nightShiftStatus;
+(id)nightShiftStatusWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)supported;
-(BOOL)enabled;
-(BOOL)active;
-(id)groupIdentifier;
-(void)setActive:(BOOL)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSupported:(BOOL)arg1 ;
-(NSString *)nightShiftMode;
-(void)setNightShiftMode:(NSString *)arg1 ;
-(CFCBNightShiftSchedule *)nightShiftSchedule;
-(void)setNightShiftSchedule:(CFCBNightShiftSchedule *)arg1 ;
-(BOOL)sunSchedulePermitted;
-(void)setSunSchedulePermitted:(BOOL)arg1 ;
@end

