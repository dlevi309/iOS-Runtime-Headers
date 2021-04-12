/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHResourceRequest.h>

@protocol PLResourceIdentity;
@interface PHMakeResourceAvailableRequest : PHResourceRequest {

	BOOL _transient;
	BOOL _networkAccessAllowed;
	id<PLResourceIdentity> _resourceIdentity;
	long long _downloadIntent;

}

@property (nonatomic,readonly) id<PLResourceIdentity> resourceIdentity;                            //@synthesize resourceIdentity=_resourceIdentity - In the implementation block
@property (assign,getter=isTransient,nonatomic) BOOL transient;                                    //@synthesize transient=_transient - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (assign,nonatomic) long long downloadIntent;                                             //@synthesize downloadIntent=_downloadIntent - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTransient:(BOOL)arg1 ;
-(void)setDownloadIntent:(long long)arg1 ;
-(BOOL)isTransient;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)downloadIntent;
-(id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 resource:(id)arg3 ;
-(id<PLResourceIdentity>)resourceIdentity;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isNetworkAccessAllowed;
@end

