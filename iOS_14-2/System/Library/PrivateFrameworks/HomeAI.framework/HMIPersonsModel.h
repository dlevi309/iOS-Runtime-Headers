/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class VNPersonsModel, NSUUID, HMIPersonsModelSummary, NSString;

@interface HMIPersonsModel : HMFObject <HMFLogging> {

	BOOL _externalLibrary;
	VNPersonsModel* _visionPersonsModel;
	NSUUID* _homeUUID;
	NSUUID* _sourceUUID;

}

@property (readonly) VNPersonsModel * visionPersonsModel;                        //@synthesize visionPersonsModel=_visionPersonsModel - In the implementation block
@property (readonly) NSUUID * homeUUID;                                          //@synthesize homeUUID=_homeUUID - In the implementation block
@property (readonly) NSUUID * sourceUUID;                                        //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (getter=isExternalLibrary,readonly) BOOL externalLibrary;              //@synthesize externalLibrary=_externalLibrary - In the implementation block
@property (readonly) HMIPersonsModelSummary * summary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSUUID *)homeUUID;
-(HMIPersonsModelSummary *)summary;
-(NSUUID *)sourceUUID;
-(BOOL)isExternalLibrary;
-(VNPersonsModel *)visionPersonsModel;
-(id)initWithPersonsModel:(id)arg1 homeUUID:(id)arg2 sourceUUID:(id)arg3 externalLibrary:(BOOL)arg4 ;
@end

