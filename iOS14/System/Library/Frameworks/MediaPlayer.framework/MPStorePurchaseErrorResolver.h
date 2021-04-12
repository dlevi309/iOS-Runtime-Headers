/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAVErrorResolver.h>

@class NSNumber;

@interface MPStorePurchaseErrorResolver : MPAVErrorResolver {

	NSNumber* _storeAccountIdentifier;

}

@property (nonatomic,copy,readonly) NSNumber * storeAccountIdentifier;              //@synthesize storeAccountIdentifier=_storeAccountIdentifier - In the implementation block
-(NSNumber *)storeAccountIdentifier;
-(id)initWithStoreAccountIdentifier:(id)arg1 ;
-(void)resolveError:(id)arg1 ;
@end

