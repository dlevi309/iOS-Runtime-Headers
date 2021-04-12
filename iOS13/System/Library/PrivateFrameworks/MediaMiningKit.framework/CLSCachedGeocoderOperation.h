/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <PipelineKit/PIOperationSubclass.h>

@class CLSLocationCache;

@interface CLSCachedGeocoderOperation : PIOperationSubclass {

	id _location;
	CLSLocationCache* _locationCache;
	double _accuracy;
	BOOL _forceQuery;

}

@property (assign) BOOL forceQuery;              //@synthesize forceQuery=_forceQuery - In the implementation block
+(id)operationWithLocation:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(id)operationWithLocation:(id)arg1 ;
+(id)operationWithLocation:(id)arg1 withAccuracy:(double)arg2 ;
+(double)recommendedAccuracy;
-(void)cancel;
-(void)execute;
-(id)initWithLocation:(id)arg1 withAccuracy:(double)arg2 ;
-(BOOL)forceQuery;
-(void)setForceQuery:(BOOL)arg1 ;
@end

