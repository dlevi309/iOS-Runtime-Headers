/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
*/


@class NSString, NSMutableArray;

@interface DDScannerList : NSObject {

	BOOL _spotlightSuggestionsEnabled;
	int _type;
	NSString* _hash;
	NSMutableArray* _waitQueue;
	NSMutableArray* _scannerCache;
	NSMutableArray* _activeScanners;

}
-(unsigned long long)totalCount;
-(unsigned long long)busyCount;
-(BOOL)cancelJob:(long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)getCachedScanner;
-(void)activateScanner:(id)arg1 ;
-(id)scannerCreate;
-(void)pushBackScanner:(id)arg1 ;
-(void)enqueueJob:(/*^block*/id)arg1 withIdentifier:(long long)arg2 ;
-(id)dequeueJob;
@end

