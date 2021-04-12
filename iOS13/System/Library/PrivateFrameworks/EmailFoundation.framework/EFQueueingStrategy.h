/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

@class NSString;


@protocol EFQueueingStrategy <NSObject>
@property (nonatomic,readonly) NSString * descriptionType; 
@required
-(NSString *)descriptionType;
-(void)enqueueObject:(id)arg1 replaceIfExists:(BOOL)arg2 buffer:(id)arg3;
-(void)dequeueObject:(id)arg1 buffer:(id)arg2;

@end

