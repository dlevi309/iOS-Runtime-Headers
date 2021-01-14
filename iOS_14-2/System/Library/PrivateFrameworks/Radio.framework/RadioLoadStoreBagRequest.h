/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/

#import <Radio/RadioRequest.h>

@interface RadioLoadStoreBagRequest : RadioRequest {

	BOOL _ignoresRadioDiskCache;

}

@property (assign,nonatomic) BOOL ignoresRadioDiskCache;              //@synthesize ignoresRadioDiskCache=_ignoresRadioDiskCache - In the implementation block
-(void)loadStoreBagWithOptions:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)ignoresRadioDiskCache;
-(void)setIgnoresRadioDiskCache:(BOOL)arg1 ;
@end

