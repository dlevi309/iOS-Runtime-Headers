/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSMutableArray;

@interface GeocodeRequest : NSObject {

	NSMutableArray* _completionHandlers;

}

@property (nonatomic,retain) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)completionHandlers;
@end

