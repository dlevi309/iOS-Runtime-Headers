/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NTKFace, NSSet, NSDictionary, NSString, NSError;

@interface NTKGreenfieldAnalyticsModel : NSObject {

	NTKFace* _watchFace;
	NSSet* _purchasedComplicationsItemIds;
	NSSet* _skippedComplicationsItemIds;
	NSDictionary* _complicationSlotToIdMapping;
	NSString* _addFaceFlowExitScreenName;
	NSString* _distributionMechanism;
	NSError* _error;
	NSString* _errorMessage;

}

@property (nonatomic,copy) NTKFace * watchFace;                                     //@synthesize watchFace=_watchFace - In the implementation block
@property (nonatomic,copy) NSSet * purchasedComplicationsItemIds;                   //@synthesize purchasedComplicationsItemIds=_purchasedComplicationsItemIds - In the implementation block
@property (nonatomic,copy) NSSet * skippedComplicationsItemIds;                     //@synthesize skippedComplicationsItemIds=_skippedComplicationsItemIds - In the implementation block
@property (nonatomic,copy) NSDictionary * complicationSlotToIdMapping;              //@synthesize complicationSlotToIdMapping=_complicationSlotToIdMapping - In the implementation block
@property (nonatomic,copy) NSString * addFaceFlowExitScreenName;                    //@synthesize addFaceFlowExitScreenName=_addFaceFlowExitScreenName - In the implementation block
@property (nonatomic,copy) NSString * distributionMechanism;                        //@synthesize distributionMechanism=_distributionMechanism - In the implementation block
@property (nonatomic,copy) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * errorMessage;                                 //@synthesize errorMessage=_errorMessage - In the implementation block
-(void)setError:(NSError *)arg1 ;
-(NSString *)errorMessage;
-(NSError *)error;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NTKFace *)watchFace;
-(void)setWatchFace:(NTKFace *)arg1 ;
-(NSSet *)purchasedComplicationsItemIds;
-(void)setPurchasedComplicationsItemIds:(NSSet *)arg1 ;
-(NSSet *)skippedComplicationsItemIds;
-(void)setSkippedComplicationsItemIds:(NSSet *)arg1 ;
-(NSDictionary *)complicationSlotToIdMapping;
-(void)setComplicationSlotToIdMapping:(NSDictionary *)arg1 ;
-(NSString *)addFaceFlowExitScreenName;
-(void)setAddFaceFlowExitScreenName:(NSString *)arg1 ;
-(NSString *)distributionMechanism;
-(void)setDistributionMechanism:(NSString *)arg1 ;
@end

