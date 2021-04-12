/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <libobjc.A.dylib/NUANFDebugSettingsProvider.h>

@interface NewsArticles.ANFDebugSettingsProvider : NSObject <NUANFDebugSettingsProvider> {

	 viewportDebuggingEnabled;
	 testingConditionEnabled;
	 observers;

}

@property (assign,nonatomic) BOOL viewportDebuggingEnabled; 
@property (assign,nonatomic) BOOL testingConditionEnabled; 
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(void)setTestingConditionEnabled:(BOOL)arg1 ;
-(BOOL)testingConditionEnabled;
-(BOOL)viewportDebuggingEnabled;
-(void)setViewportDebuggingEnabled:(BOOL)arg1 ;
@end

