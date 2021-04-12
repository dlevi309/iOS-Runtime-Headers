/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/


@class NSArray, FTMessageDelivery;

@interface FTRegionSupport : NSObject {

	NSArray* _regions;
	FTMessageDelivery* _delivery;

}

@property (retain) FTMessageDelivery * delivery;              //@synthesize delivery=_delivery - In the implementation block
@property (retain) NSArray * regions;                         //@synthesize regions=_regions - In the implementation block
@property (readonly) BOOL isLoaded; 
@property (readonly) BOOL isLoading; 
+(id)sharedInstance;
-(void)dealloc;
-(BOOL)isLoaded;
-(void)startLoading;
-(NSArray *)regions;
-(BOOL)isLoading;
-(void)setRegions:(NSArray *)arg1 ;
-(id)regionForID:(id)arg1 ;
-(FTMessageDelivery *)delivery;
-(void)_buildMessageDeliveryIfNeeded;
-(void)flushRegions;
-(void)setDelivery:(FTMessageDelivery *)arg1 ;
@end

