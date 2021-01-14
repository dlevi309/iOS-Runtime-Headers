/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/

#import <SAObjects/SADomainCommand.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>
#import <libobjc.A.dylib/SAAceSerializable.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>

@class NSString, NSNumber, CFCBNightShiftSchedule;

@interface CFCBSetNightShiftMode : SADomainCommand <CFLocalAceHandling, SAAceSerializable, CFLocalAceHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSNumber * active; 
@property (nonatomic,copy) NSNumber * enable; 
@property (nonatomic,copy) NSString * mode; 
@property (nonatomic,copy) NSString * option; 
@property (nonatomic,retain) CFCBNightShiftSchedule * schedule; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)setNightShiftMode;
+(id)setNightShiftModeWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)enable;
-(NSString *)mode;
-(NSNumber *)active;
-(id)groupIdentifier;
-(void)setActive:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)option;
-(void)setMode:(NSString *)arg1 ;
-(CFCBNightShiftSchedule *)schedule;
-(void)setOption:(NSString *)arg1 ;
-(void)setSchedule:(CFCBNightShiftSchedule *)arg1 ;
-(void)setEnable:(NSNumber *)arg1 ;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
@end

