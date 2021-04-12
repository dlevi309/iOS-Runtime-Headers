/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

