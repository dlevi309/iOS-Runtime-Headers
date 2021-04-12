/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/


@class CARSessionStatus, CARSession;

@interface CPSEntityUtility : NSObject {

	CARSessionStatus* _sessionStatus;

}

@property (nonatomic,retain) CARSessionStatus * sessionStatus;              //@synthesize sessionStatus=_sessionStatus - In the implementation block
@property (nonatomic,readonly) CARSession * currentSession; 
@property (nonatomic,readonly) BOOL rightHandDrive; 
+(id)sharedInstance;
-(id)init;
-(BOOL)rightHandDrive;
-(CARSessionStatus *)sessionStatus;
-(void)setSessionStatus:(CARSessionStatus *)arg1 ;
-(CARSession *)currentSession;
@end

