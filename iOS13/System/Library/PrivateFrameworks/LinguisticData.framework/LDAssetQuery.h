/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LinguisticData.framework/LinguisticData
*/


@class NSString, NSConditionLock;

@interface LDAssetQuery : NSObject {

	NSString* _language;
	NSConditionLock* _conditionLock;
	BOOL _hasCompleted;
	BOOL _waitTimedOut;

}

@property (readonly) BOOL hasCompleted; 
-(void)dealloc;
-(BOOL)hasCompleted;
-(BOOL)waitForCompletion;
-(id)initWithLanguage:(id)arg1 ;
-(void)_runInForeground:(BOOL)arg1 ;
-(void)runInForeground;
-(void)runInBackground;
@end

