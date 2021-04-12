/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/

#import <SAObjects/SABaseCommand.h>
#import <libobjc.A.dylib/SAServerBoundCommand.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>

@class NSString;

@interface CFMGGetMobileGestaltStringResponse : SABaseCommand <SAServerBoundCommand, CFLocalAceHandling>

@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getMobileGestaltStringResponse;
+(id)getMobileGestaltStringResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
@end

