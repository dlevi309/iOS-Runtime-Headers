/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/

#import <LiveFS/LiveFS-Structs.h>
#import <libobjc.A.dylib/NSFileProviderLiveItemSearchResults.h>

@class NSDate, NSCondition, NSMutableArray, NSMutableData, NSXPCConnection, NSString;

@interface LiveFSServiceSearchResultHandler : NSObject <NSFileProviderLiveItemSearchResults> {

	unsigned pendingData;
	BOOL waiter;
	NSDate* nextReplyDeadline;
	NSCondition* condVar;
	NSMutableArray* pendingPaths;
	NSMutableData* pendingAttributes;
	unsigned pendingAttributesValidSize;
	unsigned pendingAttributesSize;
	NSMutableArray* pendingXAttrs;
	BOOL _throttlingActive;
	BOOL _active;
	unsigned _maxData;
	unsigned _currentCredits;
	NSXPCConnection* _conn;
	NSString* _ourToken;
	double _maxDelay;

}

@property (retain) NSXPCConnection * conn;               //@synthesize conn=_conn - In the implementation block
@property (retain) NSString * ourToken;                  //@synthesize ourToken=_ourToken - In the implementation block
@property (assign) unsigned maxData;                     //@synthesize maxData=_maxData - In the implementation block
@property (assign) double maxDelay;                      //@synthesize maxDelay=_maxDelay - In the implementation block
@property (assign) BOOL throttlingActive;                //@synthesize throttlingActive=_throttlingActive - In the implementation block
@property (assign) unsigned currentCredits;              //@synthesize currentCredits=_currentCredits - In the implementation block
@property (assign) BOOL active;                          //@synthesize active=_active - In the implementation block
+(id)newSearchHandler:(id)arg1 connection:(id)arg2 maxData:(unsigned)arg3 maxDelay:(double)arg4 initialCredits:(unsigned)arg5 ;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(double)maxDelay;
-(void)setMaxDelay:(double)arg1 ;
-(NSXPCConnection *)conn;
-(unsigned)maxData;
-(void)setConn:(NSXPCConnection *)arg1 ;
-(id)initForToken:(id)arg1 connection:(id)arg2 maxData:(unsigned)arg3 maxDelay:(double)arg4 initialCredits:(unsigned)arg5 ;
-(int)grabACredit;
-(int)flushBufferedResults:(id)arg1 ;
-(void)LISearchResult:(id)arg1 itemAttributes:(LIFileAttributes*)arg2 attributeSize:(unsigned)arg3 itemXAttrs:(id)arg4 ;
-(void)LISearchTokenDone:(int)arg1 ;
-(void)LISearchReplenishCredits:(unsigned)arg1 reply:(/*^block*/id)arg2 ;
-(NSString *)ourToken;
-(void)setOurToken:(NSString *)arg1 ;
-(void)setMaxData:(unsigned)arg1 ;
-(BOOL)throttlingActive;
-(void)setThrottlingActive:(BOOL)arg1 ;
-(unsigned)currentCredits;
-(void)setCurrentCredits:(unsigned)arg1 ;
@end

