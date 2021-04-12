/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFHostEmulationSessionCallbacks.h>

@protocol NFHCESessionDelegate;
@class NSString;

@interface NFHCESession : NFSession <NFHostEmulationSessionCallbacks> {

	id<NFHCESessionDelegate> _delegate;

}

@property (assign) id<NFHCESessionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NFHCESessionDelegate>)delegate;
-(void)setDelegate:(id<NFHCESessionDelegate>)arg1 ;
-(void)endSession;
-(void)didEndUnexpectedly;
-(id)readAPDU:(id*)arg1 ;
-(void)didReceiveAPDU:(id)arg1 ;
-(void)didConnectToReader;
-(void)didDisconnectFromReader;
-(id)startEmulation;
-(id)stopEmulation;
-(id)sendAPDU:(id)arg1 ;
@end

