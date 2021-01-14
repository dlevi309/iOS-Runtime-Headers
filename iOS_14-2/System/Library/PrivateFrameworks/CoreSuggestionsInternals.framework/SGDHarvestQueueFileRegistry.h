/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSString, NSMutableDictionary;

@interface SGDHarvestQueueFileRegistry : NSObject {

	NSString* _dir;
	NSMutableDictionary* _fdForFileId;
	opaque_pthread_mutex_t _lock;

}
+(id)defaultRegistry:(id)arg1 ;
-(void)flush;
-(id)init;
-(int)openForWritingIfPossible:(int)arg1 ;
-(int)openForReadingIfPossible:(int)arg1 ;
-(void)prepareToOpenForReading:(int)arg1 ;
-(void)_flushFileId:(int)arg1 ;
-(int)_openForReadingIfPossibleNoCacheLocked:(int)arg1 ;
-(id)initWithDirectory:(id)arg1 ;
-(void)dealloc;
@end

