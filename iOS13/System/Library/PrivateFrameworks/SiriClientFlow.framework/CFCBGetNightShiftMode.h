/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/

#import <SAObjects/SADomainCommand.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>
#import <libobjc.A.dylib/SAAceSerializable.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>

@class NSString;

@interface CFCBGetNightShiftMode : SADomainCommand <CFLocalAceHandling, SAAceSerializable, CFLocalAceHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getNightShiftMode;
+(id)getNightShiftModeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
-(void)getNightShiftStatusWithCompletion:(/*^block*/id)arg1 ;
@end

