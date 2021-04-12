/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/


@class FTServiceStatus;

@interface FTiMessageStatus : NSObject {

	FTServiceStatus* _serviceStatus;

}

@property (nonatomic,readonly) FTServiceStatus * serviceStatus;              //@synthesize serviceStatus=_serviceStatus - In the implementation block
@property (nonatomic,readonly) BOOL iMessageSupported; 
+(id)sharedInstance;
-(id)initPrivate;
-(BOOL)iMessageSupported;
-(FTServiceStatus *)serviceStatus;
@end

