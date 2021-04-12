/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@protocol OS_nw_path;
@class NSObject;

@interface CPLNetworkState : NSObject {

	NSObject*<OS_nw_path> _networkPath;

}

@property (nonatomic,readonly) NSObject*<OS_nw_path> networkPath;                  //@synthesize networkPath=_networkPath - In the implementation block
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (getter=isConstrained,nonatomic,readonly) BOOL constrained; 
@property (getter=isCellular,nonatomic,readonly) BOOL cellular; 
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)redactedDescription;
-(BOOL)isCellular;
-(BOOL)isConstrained;
-(BOOL)isConnected;
-(id)initWithNetworkPath:(id)arg1 ;
-(NSObject*<OS_nw_path>)networkPath;
@end

