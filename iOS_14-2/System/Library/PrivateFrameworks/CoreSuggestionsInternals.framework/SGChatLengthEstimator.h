/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSMutableData, NSString;

@interface SGChatLengthEstimator : NSObject {

	int _fd;
	NSMutableData* _backingData;
	unsigned short* _countPtr;
	char* _sketch;
	opaque_pthread_mutex_t _lock;
	NSString* _path;

}

@property (readonly) NSString * path;                       //@synthesize path=_path - In the implementation block
@property (readonly) unsigned long long count; 
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(id)initInMemory;
-(id)init;
-(id)initWithPath:(id)arg1 ;
-(NSString *)path;
-(unsigned long long)count;
-(void)dealloc;
-(void)recordMessageInChat:(id)arg1 ;
-(unsigned long long)estimateMessagesInChat:(id)arg1 ;
@end

