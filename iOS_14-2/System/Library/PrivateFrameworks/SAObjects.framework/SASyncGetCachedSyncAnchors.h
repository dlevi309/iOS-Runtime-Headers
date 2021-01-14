/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASyncGetCachedSyncAnchors : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * interactionId; 
+(id)getCachedSyncAnchors;
+(id)getCachedSyncAnchorsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
@end

