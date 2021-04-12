/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@class NSCache;

@interface NBRegularExpressionCache : NSObject {

	NSCache* _cache;

}

@property (nonatomic,retain) NSCache * cache;              //@synthesize cache=_cache - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setCache:(NSCache *)arg1 ;
-(NSCache *)cache;
-(id)regularExpressionForPattern:(id)arg1 error:(id*)arg2 ;
@end

