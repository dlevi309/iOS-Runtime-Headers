/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>

@protocol HMIPersonManagerDataSource;
@class NSUUID;

@interface HMIPersonManager : HMFObject {

	BOOL _supportsFaceClassification;
	BOOL _personDataAvailableViaHomeKit;
	NSUUID* _UUID;
	NSUUID* _homeUUID;
	id<HMIPersonManagerDataSource> _dataSource;

}

@property (copy,readonly) NSUUID * UUID;                                                            //@synthesize UUID=_UUID - In the implementation block
@property (copy,readonly) NSUUID * homeUUID;                                                        //@synthesize homeUUID=_homeUUID - In the implementation block
@property (assign,nonatomic,__weak) id<HMIPersonManagerDataSource> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) BOOL supportsFaceClassification;                                                 //@synthesize supportsFaceClassification=_supportsFaceClassification - In the implementation block
@property (getter=isPersonDataAvailableViaHomeKit) BOOL personDataAvailableViaHomeKit;              //@synthesize personDataAvailableViaHomeKit=_personDataAvailableViaHomeKit - In the implementation block
-(NSUUID *)homeUUID;
-(NSUUID *)UUID;
-(id<HMIPersonManagerDataSource>)dataSource;
-(void)setDataSource:(id<HMIPersonManagerDataSource>)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(BOOL)supportsFaceClassification;
-(void)handleUpdatedPerson:(id)arg1 ;
-(void)handleUpdatedPersonFaceCrop:(id)arg1 ;
-(void)handleUpdatedFaceprint:(id)arg1 ;
-(void)handleRemovedPersonWithUUID:(id)arg1 ;
-(void)handleRemovedFaceCropWithUUID:(id)arg1 ;
-(void)handleRemovedFaceprintWithUUID:(id)arg1 ;
-(void)setSupportsFaceClassification:(BOOL)arg1 ;
-(BOOL)isPersonDataAvailableViaHomeKit;
-(void)setPersonDataAvailableViaHomeKit:(BOOL)arg1 ;
-(id)initWithUUID:(id)arg1 homeUUID:(id)arg2 ;
-(void)handleUpdatedUnassociatedFaceCrop:(id)arg1 ;
@end

