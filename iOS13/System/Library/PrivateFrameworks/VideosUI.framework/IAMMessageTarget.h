/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

@class NSString;


@protocol IAMMessageTarget <NSObject>
@property (nonatomic,readonly) NSString * targetIdentifier; 
@required
-(NSString *)targetIdentifier;
-(void)messageCoordinator:(id)arg1 didUpdatePriorityMessage:(id)arg2 forTarget:(id)arg3;

@end

