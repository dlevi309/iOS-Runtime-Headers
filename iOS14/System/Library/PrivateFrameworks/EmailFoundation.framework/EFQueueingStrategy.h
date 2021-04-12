/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

@class NSString;


@protocol EFQueueingStrategy <NSObject>
@property (nonatomic,readonly) NSString * descriptionType; 
@required
-(void)enqueueObject:(id)arg1 replaceIfExists:(BOOL)arg2 buffer:(id)arg3;
-(void)dequeueObject:(id)arg1 buffer:(id)arg2;
-(NSString *)descriptionType;

@end

