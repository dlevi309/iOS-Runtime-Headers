/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/


@class NSCache;

@interface CRSFCardLoader : NSObject {

	NSCache* _loadedCards;

}
+(id)sharedLoader;
-(id)init;
-(void)loadSFCard:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

