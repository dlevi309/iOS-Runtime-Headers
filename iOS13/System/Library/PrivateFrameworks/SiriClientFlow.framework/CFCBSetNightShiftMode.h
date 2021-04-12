/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setMode:(NSString *)arg1 ;
-(void)setActive:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(NSString *)mode;
-(CFCBNightShiftSchedule *)schedule;
-(NSNumber *)active;
-(void)setSchedule:(CFCBNightShiftSchedule *)arg1 ;
-(NSNumber *)enable;
-(void)setEnable:(NSNumber *)arg1 ;
-(NSString *)option;
-(id)encodedClassName;
-(void)setOption:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
@end

