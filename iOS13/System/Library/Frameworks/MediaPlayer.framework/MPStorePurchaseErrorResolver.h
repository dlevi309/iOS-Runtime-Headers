/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAVErrorResolver.h>

@class NSNumber;

@interface MPStorePurchaseErrorResolver : MPAVErrorResolver {

	NSNumber* _storeAccountIdentifier;

}

@property (nonatomic,copy,readonly) NSNumber * storeAccountIdentifier;              //@synthesize storeAccountIdentifier=_storeAccountIdentifier - In the implementation block
-(void)resolveError:(id)arg1 ;
-(id)initWithStoreAccountIdentifier:(id)arg1 ;
-(NSNumber *)storeAccountIdentifier;
@end

