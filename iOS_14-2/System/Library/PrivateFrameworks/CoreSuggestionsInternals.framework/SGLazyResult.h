/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@interface SGLazyResult : NSObject {

	id _data;
	opaque_pthread_mutex_t _lock;
	/*^block*/id _block;

}

@property (nonatomic,readonly) id result; 
@property (nonatomic,readonly) id resultIfAvailable; 
-(id)initWithResult:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)resultIfAvailable;
-(id)result;
-(id)_init;
-(void)dealloc;
-(id)_initWithBlock:(/*^block*/id)arg1 ;
@end

