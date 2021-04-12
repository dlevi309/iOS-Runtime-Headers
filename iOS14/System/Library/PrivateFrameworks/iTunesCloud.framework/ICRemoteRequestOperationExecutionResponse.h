/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSError *)remoteRequestOperationError;
-(id<NSSecureCoding>)remoteRequestOperationResponse;
-(void)setRemoteRequestOperationResponse:(id<NSSecureCoding>)arg1 ;
-(void)setRemoteRequestOperationError:(NSError *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRemoteRequestOperationResponse:(id)arg1 remoteRequestOperationError:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end

