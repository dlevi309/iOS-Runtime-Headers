/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasCompleted;
-(BOOL)waitForCompletion;
-(id)initWithLanguage:(id)arg1 ;
-(void)dealloc;
-(void)_runInForeground:(BOOL)arg1 ;
-(void)runInForeground;
-(void)runInBackground;
@end

