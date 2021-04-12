/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/


@class NSMutableArray, NSMutableSet;

@interface WPAdvertisingRequestsQueue : NSObject {

	NSMutableArray* _queue;
	NSMutableSet* _clientTypes;

}

@property (nonatomic,retain) NSMutableArray * queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * clientTypes;              //@synthesize clientTypes=_clientTypes - In the implementation block
-(id)init;
-(unsigned long long)count;
-(void)setQueue:(NSMutableArray *)arg1 ;
-(NSMutableArray *)queue;
-(void)remove:(id)arg1 ;
-(void)removeAll;
-(void)add:(id)arg1 ;
-(void)removeRequestsOfClientType:(unsigned char)arg1 ;
-(BOOL)isAdvertisingForClientType:(unsigned char)arg1 ;
-(id)allRequests;
-(NSMutableSet *)clientTypes;
-(void)setClientTypes:(NSMutableSet *)arg1 ;
@end

