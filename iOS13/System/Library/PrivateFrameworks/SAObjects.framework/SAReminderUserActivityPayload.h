/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(SAUserActivity *)userActivity;
-(void)setUserActivity:(SAUserActivity *)arg1 ;
-(id)encodedClassName;
@end

