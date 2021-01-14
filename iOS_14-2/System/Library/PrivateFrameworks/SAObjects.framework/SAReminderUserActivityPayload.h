/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAReminderPayload.h>

@class SAUserActivity, NSString;

@interface SAReminderUserActivityPayload : AceObject <SAReminderPayload>

@property (nonatomic,retain) SAUserActivity * userActivity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userActivityPayload;
+(id)userActivityPayloadWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAUserActivity *)userActivity;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setUserActivity:(SAUserActivity *)arg1 ;
@end

