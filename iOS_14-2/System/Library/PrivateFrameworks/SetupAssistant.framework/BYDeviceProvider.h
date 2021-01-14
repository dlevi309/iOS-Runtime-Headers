/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@protocol BYDeviceProvider <NSObject>
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long size; 
@property (nonatomic,readonly) BOOL hasHomeButton; 
@required
-(long long)size;
-(BOOL)hasHomeButton;
-(long long)type;

@end

