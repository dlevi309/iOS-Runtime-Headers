/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@protocol OS_nw_path;
@class NSObject, NSDictionary;

@interface CPLNetworkState : NSObject {

	BOOL _cellularRestricted;
	BOOL _inAirplaneMode;
	NSObject*<OS_nw_path> _networkPath;

}

@property (nonatomic,readonly) NSObject*<OS_nw_path> networkPath;                                //@synthesize networkPath=_networkPath - In the implementation block
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (getter=isConstrained,nonatomic,readonly) BOOL constrained; 
@property (getter=isCellular,nonatomic,readonly) BOOL cellular; 
@property (getter=isCellularRestricted,nonatomic,readonly) BOOL cellularRestricted;              //@synthesize cellularRestricted=_cellularRestricted - In the implementation block
@property (getter=isInAirplaneMode,nonatomic,readonly) BOOL inAirplaneMode;                      //@synthesize inAirplaneMode=_inAirplaneMode - In the implementation block
@property (nonatomic,readonly) BOOL canUseNetwork; 
@property (nonatomic,readonly) NSDictionary * plistDescription; 
-(BOOL)isConnected;
-(BOOL)isInAirplaneMode;
-(BOOL)isCellularRestricted;
-(id)description;
-(BOOL)isCellular;
-(BOOL)canUseNetwork;
-(BOOL)isConstrained;
-(id)redactedDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithNetworkPath:(id)arg1 cellularRestricted:(BOOL)arg2 inAirplaneMode:(BOOL)arg3 ;
-(NSDictionary *)plistDescription;
-(BOOL)isFunctionallyEqual:(id)arg1 ;
-(NSObject*<OS_nw_path>)networkPath;
@end

