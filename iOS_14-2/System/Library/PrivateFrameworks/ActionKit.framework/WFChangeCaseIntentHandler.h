/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/WFChangeCaseIntentHandling.h>

@class NSString;

@interface WFChangeCaseIntentHandler : NSObject <WFChangeCaseIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleChangeCase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveTextForChangeCase:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveTypeForChangeCase:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)stringByApplyingSentenceCaseToString:(id)arg1 withLocale:(id)arg2 ;
-(id)stringByApplyingTitleCaseToString:(id)arg1 ;
-(id)stringByApplyingAlternatingCaseToString:(id)arg1 ;
@end

