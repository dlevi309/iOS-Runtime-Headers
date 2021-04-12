/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

@class Project, MiroMemory, MiroAutoEditLogger;


@protocol MiroAutoEditDelegate <NSObject>
@property (nonatomic,readonly) Project * project; 
@property (nonatomic,readonly) MiroMemory * activeMemory; 
@property (nonatomic,readonly) MiroAutoEditLogger * logger; 
@property (nonatomic,readonly) BOOL titleIsSupported; 
@optional
-(BOOL)titleIsSupported;

@required
-(MiroAutoEditLogger *)logger;
-(Project *)project;
-(MiroMemory *)activeMemory;

@end

