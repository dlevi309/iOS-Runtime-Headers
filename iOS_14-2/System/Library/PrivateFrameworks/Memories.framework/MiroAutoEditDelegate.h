/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

