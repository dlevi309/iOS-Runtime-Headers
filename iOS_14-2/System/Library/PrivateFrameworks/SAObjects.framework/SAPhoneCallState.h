/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSString;

@interface SAPhoneCallState : AceObject <SABackgroundContextObject>

@property (assign,nonatomic) BOOL active; 
@property (assign,nonatomic) BOOL incoming; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)callState;
+(id)callStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)active;
-(id)groupIdentifier;
-(void)setActive:(BOOL)arg1 ;
-(id)encodedClassName;
-(BOOL)incoming;
-(void)setIncoming:(BOOL)arg1 ;
@end

