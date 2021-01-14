/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(BOOL)isPeerConnectionError;
-(void)setIsPeerConnectionError:(BOOL)arg1 ;
-(BOOL)isPeerNotNearbyError;
-(void)setIsPeerNotNearbyError:(BOOL)arg1 ;
@end

