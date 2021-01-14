/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/WFMatchTextGetGroupIntentHandling.h>

@class NSString;

@interface WFMatchTextGetGroupIntentHandler : NSObject <WFMatchTextGetGroupIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleMatchTextGetGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveMatchesForMatchTextGetGroup:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveTypeForMatchTextGetGroup:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveGroupIndexForMatchTextGetGroup:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)matchedTextInString:(id)arg1 withResult:(id)arg2 atIndex:(long long)arg3 ;
@end

