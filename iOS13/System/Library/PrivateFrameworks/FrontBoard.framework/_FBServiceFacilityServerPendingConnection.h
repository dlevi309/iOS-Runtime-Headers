/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(FBSServiceFacility *)facility;
-(id)initWithFacility:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFacility:(FBSServiceFacility *)arg1 ;
@end

