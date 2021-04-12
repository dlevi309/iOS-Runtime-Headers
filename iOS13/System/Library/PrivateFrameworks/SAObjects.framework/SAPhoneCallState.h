/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setActive:(BOOL)arg1 ;
-(id)groupIdentifier;
-(BOOL)active;
-(id)encodedClassName;
-(BOOL)incoming;
-(void)setIncoming:(BOOL)arg1 ;
@end

