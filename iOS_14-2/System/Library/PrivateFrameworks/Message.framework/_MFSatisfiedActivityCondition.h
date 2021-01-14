/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/MFActivityCondition.h>

@class EFObservable, NSString;

@interface _MFSatisfiedActivityCondition : NSObject <MFActivityCondition>

@property (getter=isSatisfied,nonatomic,readonly) BOOL satisfied; 
@property (nonatomic,readonly) EFObservable * conditionsObservable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isSatisfied;
-(EFObservable *)conditionsObservable;
@end

