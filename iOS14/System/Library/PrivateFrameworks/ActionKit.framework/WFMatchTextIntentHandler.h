/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/WFMatchTextIntentHandling.h>

@class NSString;

@interface WFMatchTextIntentHandler : NSObject <WFMatchTextIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleMatchText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveTextForMatchText:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolvePatternForMatchText:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveCaseSensitiveForMatchText:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

