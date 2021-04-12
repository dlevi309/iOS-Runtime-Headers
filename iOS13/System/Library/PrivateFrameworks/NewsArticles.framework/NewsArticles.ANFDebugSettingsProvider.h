/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)viewportDebuggingEnabled;
-(BOOL)testingConditionEnabled;
-(void)setTestingConditionEnabled:(BOOL)arg1 ;
-(void)setViewportDebuggingEnabled:(BOOL)arg1 ;
@end

