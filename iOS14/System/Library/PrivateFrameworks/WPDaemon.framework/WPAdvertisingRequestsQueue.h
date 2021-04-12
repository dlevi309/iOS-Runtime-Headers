/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/


@class NSMutableArray, NSMutableSet;

@interface WPAdvertisingRequestsQueue : NSObject {

	NSMutableArray* _queue;
	NSMutableSet* _clientTypes;

}

@property (nonatomic,retain) NSMutableArray * queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * clientTypes;              //@synthesize clientTypes=_clientTypes - In the implementation block
-(void)remove:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)allRequests;
-(NSMutableSet *)clientTypes;
-(void)setClientTypes:(NSMutableSet *)arg1 ;
-(NSMutableArray *)queue;
-(void)setQueue:(NSMutableArray *)arg1 ;
-(void)removeRequestsOfClientType:(unsigned char)arg1 ;
-(void)removeAll;
-(void)add:(id)arg1 ;
-(BOOL)isAdvertisingForClientType:(unsigned char)arg1 ;
@end

