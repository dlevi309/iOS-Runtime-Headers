/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MFLeaseControlling.h>

@class MPCMediaFoundationTranslator, _MPCLeaseManager;

@interface MPCLeaseController : NSObject <MFLeaseControlling> {

	MPCMediaFoundationTranslator* _translator;
	_MPCLeaseManager* _leaseManager;

}

@property (nonatomic,readonly) MPCMediaFoundationTranslator * translator;              //@synthesize translator=_translator - In the implementation block
@property (nonatomic,readonly) _MPCLeaseManager * leaseManager;                        //@synthesize leaseManager=_leaseManager - In the implementation block
-(_MPCLeaseManager *)leaseManager;
-(MPCMediaFoundationTranslator *)translator;
-(id)initWithTranslator:(id)arg1 leaseManager:(id)arg2 ;
-(void)requestLeaseForItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)relinquishLeaseForItem:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

