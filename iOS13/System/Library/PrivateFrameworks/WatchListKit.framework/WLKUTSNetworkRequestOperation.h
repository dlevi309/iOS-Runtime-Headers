/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSDictionary, WLKURLRequestProperties;

@interface WLKUTSNetworkRequestOperation : WLKNetworkRequestOperation {

	NSDictionary* _responseDictionary;
	BOOL _didHandleInvalidConfig;
	WLKURLRequestProperties* _requestProperties;
	unsigned long long _environmentHash;

}

@property (assign,nonatomic) unsigned long long environmentHash;                       //@synthesize environmentHash=_environmentHash - In the implementation block
@property (nonatomic,retain) WLKURLRequestProperties * requestProperties;              //@synthesize requestProperties=_requestProperties - In the implementation block
@property (assign) BOOL didHandleInvalidConfig;                                        //@synthesize didHandleInvalidConfig=_didHandleInvalidConfig - In the implementation block
-(id)init;
-(id)shortDescription;
-(id)responseDictionary;
-(void)setRequestProperties:(WLKURLRequestProperties *)arg1 ;
-(WLKURLRequestProperties *)requestProperties;
-(id)initWithRequestProperties:(id)arg1 ;
-(void)prepareURLRequest:(/*^block*/id)arg1 ;
-(void)processResponse;
-(unsigned long long)environmentHash;
-(void)handleResult:(id)arg1 error:(id)arg2 ;
-(void)setEnvironmentHash:(unsigned long long)arg1 ;
-(BOOL)didHandleInvalidConfig;
-(void)setDidHandleInvalidConfig:(BOOL)arg1 ;
@end

