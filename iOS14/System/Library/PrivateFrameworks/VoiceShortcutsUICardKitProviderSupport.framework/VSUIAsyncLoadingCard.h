/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUICardKitProviderSupport.framework/VoiceShortcutsUICardKitProviderSupport
*/

#import <Cards/CRBasicCard.h>

@protocol CRCard;
@interface VSUIAsyncLoadingCard : CRBasicCard {

	id<CRCard> _storedCard;

}
-(id)initWithCard:(id)arg1 ;
-(BOOL)asynchronous;
-(void)loadCardWithCompletion:(/*^block*/id)arg1 ;
@end

