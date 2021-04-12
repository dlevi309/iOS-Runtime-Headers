/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isLoading;
-(void)startLoading;
-(NSArray *)regions;
-(id)regionForID:(id)arg1 ;
-(FTMessageDelivery *)delivery;
-(void)_buildMessageDeliveryIfNeeded;
-(void)flushRegions;
-(void)setDelivery:(FTMessageDelivery *)arg1 ;
-(void)setRegions:(NSArray *)arg1 ;
-(BOOL)isLoaded;
-(void)dealloc;
@end

