/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/


@class NSCache;

@interface SFSSCachingService : NSObject {

	NSCache* _memoryCache;

}

@property (nonatomic,retain) NSCache * memoryCache;              //@synthesize memoryCache=_memoryCache - In the implementation block
+(id)sharedInstance;
-(void)clear;
-(id)init;
-(NSCache *)memoryCache;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setMemoryCache:(NSCache *)arg1 ;
@end

