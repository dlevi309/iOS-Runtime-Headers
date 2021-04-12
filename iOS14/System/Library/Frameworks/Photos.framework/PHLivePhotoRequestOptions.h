/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHMediaRequestLiveRenderingOptions.h>
#import <libobjc.A.dylib/PHMediaRequestThreadingOptions.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PHLivePhotoRequestOptions : NSObject <PHMediaRequestLiveRenderingOptions, PHMediaRequestThreadingOptions, NSCopying> {

	BOOL _networkAccessAllowed;
	BOOL _liveRenderVideoIfNeeded;
	long long _version;
	long long _deliveryMode;
	/*^block*/id _progressHandler;

}

@property (nonatomic,copy,readonly) id progressHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL liveRenderVideoIfNeeded;                                         //@synthesize liveRenderVideoIfNeeded=_liveRenderVideoIfNeeded - In the implementation block
@property (assign,nonatomic) long long version;                                                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long deliveryMode;                                               //@synthesize deliveryMode=_deliveryMode - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                     //@synthesize progressHandler=_progressHandler - In the implementation block
-(void)setLiveRenderVideoIfNeeded:(BOOL)arg1 ;
-(BOOL)isSynchronous;
-(id)resultHandlerQueue;
-(BOOL)isCurrentVersion;
-(BOOL)liveRenderVideoIfNeeded;
-(BOOL)liveRenderAndOnDemandRenderVideoConcurrently;
-(id)renderResultHandlerQueue;
-(void)setProgressHandler:(id)arg1 ;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(BOOL)isNetworkAccessAllowed;
-(void)setVersion:(long long)arg1 ;
-(id)progressHandler;
-(long long)deliveryMode;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDeliveryMode:(long long)arg1 ;
@end

