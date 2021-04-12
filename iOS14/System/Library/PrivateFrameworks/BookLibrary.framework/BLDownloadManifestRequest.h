/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <BookLibrary/BLRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol BLDownloadQueueUIManagerProtocol;
@class NSURLRequest;

@interface BLDownloadManifestRequest : BLRequest <NSSecureCoding> {

	NSURLRequest* _urlRequest;
	id<BLDownloadQueueUIManagerProtocol> _uiManager;

}

@property (nonatomic,retain) NSURLRequest * URLRequest;                                   //@synthesize urlRequest=_urlRequest - In the implementation block
@property (nonatomic,retain) id<BLDownloadQueueUIManagerProtocol> uiManager;              //@synthesize uiManager=_uiManager - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)startWithManifestResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURLRequest:(id)arg1 uiManager:(id)arg2 ;
-(id<BLDownloadQueueUIManagerProtocol>)uiManager;
-(void)setURLRequest:(NSURLRequest *)arg1 ;
-(void)setUiManager:(id<BLDownloadQueueUIManagerProtocol>)arg1 ;
-(NSURLRequest *)URLRequest;
@end

