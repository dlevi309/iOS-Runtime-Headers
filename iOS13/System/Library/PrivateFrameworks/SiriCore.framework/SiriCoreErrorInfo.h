/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@class NSError;

@interface SiriCoreErrorInfo : NSObject {

	BOOL _isPeerConnectionError;
	BOOL _isPeerNotNearbyError;
	NSError* _error;

}

@property (nonatomic,retain) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL isPeerConnectionError;              //@synthesize isPeerConnectionError=_isPeerConnectionError - In the implementation block
@property (assign,nonatomic) BOOL isPeerNotNearbyError;               //@synthesize isPeerNotNearbyError=_isPeerNotNearbyError - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isPeerConnectionError;
-(void)setIsPeerConnectionError:(BOOL)arg1 ;
-(BOOL)isPeerNotNearbyError;
-(void)setIsPeerNotNearbyError:(BOOL)arg1 ;
@end

