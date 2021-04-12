/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICStoreRequestContext;

@interface ICSuzeLeaseSessionConfiguration : NSObject <NSCopying> {

	id _leaseID;
	long long _mediaType;
	ICStoreRequestContext* _requestContext;

}

@property (nonatomic,readonly) id leaseID;                                               //@synthesize leaseID=_leaseID - In the implementation block
@property (nonatomic,readonly) long long mediaType;                                      //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy,readonly) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)mediaType;
-(ICStoreRequestContext *)requestContext;
-(id)leaseID;
-(id)initWithRequestContext:(id)arg1 leaseID:(id)arg2 mediaType:(long long)arg3 ;
@end

