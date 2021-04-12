/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/MFActivityCondition.h>

@class EFObservable, NSString;

@interface _MFSatisfiedActivityCondition : NSObject <MFActivityCondition>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isSatisfied,nonatomic,readonly) BOOL satisfied; 
@property (nonatomic,readonly) EFObservable * conditionsObservable; 
-(BOOL)isSatisfied;
-(EFObservable *)conditionsObservable;
@end

