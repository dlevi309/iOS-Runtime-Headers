/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol BRCLifeCycle <NSObject>
@property (nonatomic,readonly) BOOL isCancelled; 
@required
-(void)close;
-(void)cancel;
-(void)resume;
-(BOOL)isCancelled;

@end

