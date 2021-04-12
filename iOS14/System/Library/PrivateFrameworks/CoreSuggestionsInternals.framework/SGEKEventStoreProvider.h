/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@interface SGEKEventStoreProvider : NSObject {

	/*^block*/id _newEKEventStoreGetter;
	/*^block*/id _callBlockWithEKEventStoreForReading;

}
+(id)defaultEKStoreProvider;
-(id)initWithNewEKEventStoreGetter:(/*^block*/id)arg1 callBlockWithEKEventStoreForReading:(/*^block*/id)arg2 ;
@end

