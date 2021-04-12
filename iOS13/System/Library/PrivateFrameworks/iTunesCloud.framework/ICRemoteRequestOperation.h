/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRequestOperation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSSecureCoding;
@interface ICRemoteRequestOperation : ICRequestOperation <NSSecureCoding> {

	BOOL __shadowOperationForRemoteExecution;
	id<NSSecureCoding> _response;

}

@property (assign,setter=_setShadowOperationForRemoteExecution:,getter=_isShadowOperationForRemoteExecution,nonatomic) BOOL _shadowOperationForRemoteExecution;              //@synthesize _shadowOperationForRemoteExecution=__shadowOperationForRemoteExecution - In the implementation block
@property (nonatomic,retain) id<NSSecureCoding> response;                                                                                                                    //@synthesize response=_response - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_execute;
-(id<NSSecureCoding>)response;
-(void)setResponse:(id<NSSecureCoding>)arg1 ;
-(BOOL)_isShadowOperationForRemoteExecution;
-(void)_setShadowOperationForRemoteExecution:(BOOL)arg1 ;
@end

