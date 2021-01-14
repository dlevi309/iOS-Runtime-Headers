/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/

@class NSString, BKSHIDEventSenderDescriptor;


@protocol BKHIDEventSenderInfo <NSObject>
@property (nonatomic,copy,readonly) NSString * displayUUID; 
@property (nonatomic,readonly) int eventSource; 
@property (nonatomic,readonly) unsigned long long senderID; 
@property (nonatomic,readonly) unsigned primaryUsagePage; 
@property (nonatomic,readonly) unsigned primaryUsage; 
@property (getter=isAuthenticated,nonatomic,readonly) BOOL authenticated; 
@property (getter=isBuiltIn,nonatomic,readonly) BOOL builtIn; 
@property (nonatomic,copy,readonly) BKSHIDEventSenderDescriptor * senderDescriptor; 
@required
-(BOOL)isBuiltIn;
-(unsigned)primaryUsage;
-(BOOL)isAuthenticated;
-(NSString *)displayUUID;
-(unsigned long long)senderID;
-(unsigned)primaryUsagePage;
-(int)eventSource;
-(BKSHIDEventSenderDescriptor *)senderDescriptor;

@end

