/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/

#import <libobjc.A.dylib/CLIndoorDelegateProtocolInternal.h>
#import <libobjc.A.dylib/CLIndoorDelegateProtocol.h>

@protocol CLIndoorDelegateProtocol;
@class NSError, NSString;

@interface IndoorProtocolProxy : NSObject <CLIndoorDelegateProtocolInternal, CLIndoorDelegateProtocol> {

	id<CLIndoorDelegateProtocol> _delegate;
	NSError* _shutdownReason;

}

@property (assign,nonatomic,__weak) id<CLIndoorDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSError * shutdownReason;                                //@synthesize shutdownReason=_shutdownReason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CLIndoorDelegateProtocol>)delegate;
-(void)setDelegate:(id<CLIndoorDelegateProtocol>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSError *)shutdownReason;
-(void)indoorDidUpdateToLocation:(id)arg1 fromLocation:(id)arg2 ;
-(void)indoorIsUncertainWithLocation:(id)arg1 ;
-(void)indoorGivesUpWithLocation:(id)arg1 ;
-(void)indoorAssetDownloadProgress:(float)arg1 ;
-(void)indoorDidFailWithError:(id)arg1 ;
-(void)indoorDidShutdown:(id)arg1 ;
@end

