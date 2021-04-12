/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@class FBSServiceFacility;

@interface _FBServiceFacilityServerPendingConnection : NSObject {

	FBSServiceFacility* _facility;
	/*^block*/id _completion;

}

@property (nonatomic,retain) FBSServiceFacility * facility;              //@synthesize facility=_facility - In the implementation block
@property (nonatomic,copy) id completion;                                //@synthesize completion=_completion - In the implementation block
+(id)pendingConnectionToFacility:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setFacility:(FBSServiceFacility *)arg1 ;
-(id)initWithFacility:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FBSServiceFacility *)facility;
@end

