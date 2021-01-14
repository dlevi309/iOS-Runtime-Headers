/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/

#import <SAObjects/SABaseCommand.h>
#import <libobjc.A.dylib/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface CFBSBatteryStatusCommandCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * batteryStatuses; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)commandWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)command;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)batteryStatuses;
-(void)setBatteryStatuses:(NSArray *)arg1 ;
@end

