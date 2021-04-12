/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

