/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(id)initWithRemoteRequestOperation:(id)arg1 ;
-(ICRemoteRequestOperation *)remoteRequestOperation;
@end

