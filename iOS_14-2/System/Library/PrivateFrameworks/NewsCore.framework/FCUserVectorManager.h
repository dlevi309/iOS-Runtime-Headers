/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCUserVectorManager.h>

@protocol FCUserVectorManager
@required
-(void)fetchUserVectorProvider:(/*^block*/id)arg1;

@end


@protocol FCContentContext;
@class FCAsyncSerialQueue, FCUserVector, NSDate;

@interface FCUserVectorManager : NSObject <FCUserVectorManager> {

	FCAsyncSerialQueue* _queue;
	FCUserVector* _userVector;
	id<FCContentContext> _contentContext;
	NSDate* _lastUpdated;

}

@property (nonatomic,retain) FCAsyncSerialQueue * queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) FCUserVector * userVector;                        //@synthesize userVector=_userVector - In the implementation block
@property (nonatomic,retain) id<FCContentContext> contentContext;              //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdated;                             //@synthesize lastUpdated=_lastUpdated - In the implementation block
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(NSDate *)lastUpdated;
-(id<FCContentContext>)contentContext;
-(void)setUserVector:(FCUserVector *)arg1 ;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(id)initWithContentContext:(id)arg1 ;
-(void)fetchUserVectorProvider:(/*^block*/id)arg1 ;
-(FCAsyncSerialQueue *)queue;
-(void)setQueue:(FCAsyncSerialQueue *)arg1 ;
-(FCUserVector *)userVector;
@end

