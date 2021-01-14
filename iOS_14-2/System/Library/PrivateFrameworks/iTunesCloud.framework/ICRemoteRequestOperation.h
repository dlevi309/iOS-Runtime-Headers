/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_isShadowOperationForRemoteExecution;
-(void)_setShadowOperationForRemoteExecution:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_execute;
-(id<NSSecureCoding>)response;
-(void)setResponse:(id<NSSecureCoding>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

