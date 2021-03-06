/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAActivityStream : SABaseCommand <SAServerBoundCommand, SAAceSerializable>

@property (nonatomic,copy) NSArray * activities; 
@property (nonatomic,copy) NSString * taskType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)activityStream;
+(id)activityStreamWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)activities;
-(void)setTaskType:(NSString *)arg1 ;
-(void)setActivities:(NSArray *)arg1 ;
-(NSString *)taskType;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

