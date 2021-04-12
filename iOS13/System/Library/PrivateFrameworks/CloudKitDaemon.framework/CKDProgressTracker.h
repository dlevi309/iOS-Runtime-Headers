/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSMapTable, NSString;

@interface CKDProgressTracker : NSObject {

	BOOL _hasCachedTotalBytes;
	BOOL _hasCachedCompletedBytes;
	double _lastItemPercentage;
	unsigned long long _cachedTotalBytes;
	unsigned long long _cachedCompletedBytes;
	NSMapTable* _completedBytesByItems;
	NSString* _trackingID;

}

@property (assign,nonatomic) BOOL hasCachedTotalBytes;                             //@synthesize hasCachedTotalBytes=_hasCachedTotalBytes - In the implementation block
@property (assign,nonatomic) BOOL hasCachedCompletedBytes;                         //@synthesize hasCachedCompletedBytes=_hasCachedCompletedBytes - In the implementation block
@property (assign,nonatomic) unsigned long long cachedTotalBytes;                  //@synthesize cachedTotalBytes=_cachedTotalBytes - In the implementation block
@property (assign,nonatomic) unsigned long long cachedCompletedBytes;              //@synthesize cachedCompletedBytes=_cachedCompletedBytes - In the implementation block
@property (nonatomic,retain) NSMapTable * completedBytesByItems;                   //@synthesize completedBytesByItems=_completedBytesByItems - In the implementation block
@property (nonatomic,retain) NSString * trackingID;                                //@synthesize trackingID=_trackingID - In the implementation block
@property (assign,nonatomic) double lastItemPercentage;                            //@synthesize lastItemPercentage=_lastItemPercentage - In the implementation block
+(unsigned long long)_sizeForItem:(id)arg1 ;
-(id)init;
-(NSString *)trackingID;
-(void)setTrackingID:(NSString *)arg1 ;
-(id)initWithTrackingID:(id)arg1 ;
-(void)stopTrackingItems:(id)arg1 ;
-(void)startTrackingItems:(id)arg1 ;
-(double)updateProgressWithItem:(id)arg1 progress:(double)arg2 ;
-(void)setLastItemPercentage:(double)arg1 ;
-(unsigned long long)_updateTotalBytes;
-(unsigned long long)_updateTotalCompletedBytes;
-(double)lastItemPercentage;
-(BOOL)hasCachedTotalBytes;
-(void)setHasCachedTotalBytes:(BOOL)arg1 ;
-(BOOL)hasCachedCompletedBytes;
-(void)setHasCachedCompletedBytes:(BOOL)arg1 ;
-(unsigned long long)cachedTotalBytes;
-(void)setCachedTotalBytes:(unsigned long long)arg1 ;
-(unsigned long long)cachedCompletedBytes;
-(void)setCachedCompletedBytes:(unsigned long long)arg1 ;
-(NSMapTable *)completedBytesByItems;
-(void)setCompletedBytesByItems:(NSMapTable *)arg1 ;
@end

