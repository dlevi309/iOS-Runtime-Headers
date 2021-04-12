/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICRemoteRequestOperation;

@interface ICRemoteRequestOperationExecutionContext : NSObject <NSSecureCoding> {

	ICRemoteRequestOperation* _remoteRequestOperation;
	long long _qualityOfService;

}

@property (nonatomic,readonly) ICRemoteRequestOperation * remoteRequestOperation;              //@synthesize remoteRequestOperation=_remoteRequestOperation - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                       //@synthesize qualityOfService=_qualityOfService - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setQualityOfService:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(ICRemoteRequestOperation *)remoteRequestOperation;
-(id)initWithCoder:(id)arg1 ;
-(long long)qualityOfService;
-(id)initWithRemoteRequestOperation:(id)arg1 ;
@end

