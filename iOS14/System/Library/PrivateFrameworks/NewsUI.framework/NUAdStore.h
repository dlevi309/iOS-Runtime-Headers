/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@class NSMutableDictionary;

@interface NUAdStore : NSObject {

	NSMutableDictionary* _ads;

}

@property (nonatomic,readonly) NSMutableDictionary * ads;              //@synthesize ads=_ads - In the implementation block
-(NSMutableDictionary *)ads;
-(id)init;
-(void)addAd:(id)arg1 ;
-(id)allAds;
-(id)adsForState:(unsigned long long)arg1 ;
-(void)removeAd:(id)arg1 ;
@end

