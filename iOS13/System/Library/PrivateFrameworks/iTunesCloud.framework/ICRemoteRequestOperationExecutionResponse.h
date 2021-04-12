/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSSecureCoding;
@class NSError;

@interface ICRemoteRequestOperationExecutionResponse : NSObject <NSSecureCoding> {

	id<NSSecureCoding> _remoteRequestOperationResponse;
	NSError* _remoteRequestOperationError;

}

@property (nonatomic,retain) id<NSSecureCoding> remoteRequestOperationResponse;              //@synthesize remoteRequestOperationResponse=_remoteRequestOperationResponse - In the implementation block
@property (nonatomic,retain) NSError * remoteRequestOperationError;                          //@synthesize remoteRequestOperationError=_remoteRequestOperationError - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRemoteRequestOperationResponse:(id)arg1 remoteRequestOperationError:(id)arg2 ;
-(id<NSSecureCoding>)remoteRequestOperationResponse;
-(void)setRemoteRequestOperationResponse:(id<NSSecureCoding>)arg1 ;
-(NSError *)remoteRequestOperationError;
-(void)setRemoteRequestOperationError:(NSError *)arg1 ;
@end

