/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

