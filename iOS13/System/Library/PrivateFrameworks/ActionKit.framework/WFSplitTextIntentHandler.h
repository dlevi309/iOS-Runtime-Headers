/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/WFSplitTextIntentHandling.h>

@class NSString;

@interface WFSplitTextIntentHandler : NSObject <WFSplitTextIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleSplitText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveTextForSplitText:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveSeparatorForSplitText:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveCustomSeparatorForSplitText:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

