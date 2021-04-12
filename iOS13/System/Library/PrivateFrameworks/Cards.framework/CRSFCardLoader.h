/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

