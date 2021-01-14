/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@class NSCache;

@interface NBRegularExpressionCache : NSObject {

	NSCache* _cache;

}

@property (nonatomic,retain) NSCache * cache;              //@synthesize cache=_cache - In the implementation block
+(id)sharedInstance;
-(NSCache *)cache;
-(id)init;
-(void)setCache:(NSCache *)arg1 ;
-(id)regularExpressionForPattern:(id)arg1 error:(id*)arg2 ;
@end

