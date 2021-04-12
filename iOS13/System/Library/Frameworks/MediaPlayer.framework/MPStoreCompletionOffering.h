/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPStoreCompletionOfferResponse, MPMediaQuery, MPStoreCollectionCompletionOffering, NSURL, MPStoreOfferMediaItemCollection;

@interface MPStoreCompletionOffering : NSObject <NSCopying> {

	long long _preferredStoreOfferVariant;
	MPStoreCompletionOfferResponse* _storeOfferResponse;
	MPMediaQuery* _localItemsQuery;
	MPStoreCollectionCompletionOffering* _collectionWithCompletionItemsOffering;
	long long _presentationStyle;
	NSURL* _storeURL;

}

@property (assign,nonatomic) long long preferredStoreOfferVariant; 
@property (nonatomic,readonly) long long presentationStyle;                                                  //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,copy,readonly) NSURL * storeURL;                                                        //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,readonly) MPStoreOfferMediaItemCollection * collectionWithCompletionItems; 
+(void)setDefaultOfferVariant:(long long)arg1 ;
+(long long)defaultOfferVariant;
+(id)offeringWithResponse:(id)arg1 localItemsQuery:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)presentationStyle;
-(id)initWithResponse:(id)arg1 localItemsQuery:(id)arg2 ;
-(id)copyByInvalidatingCalculatedContent;
-(void)_loadOfferingData;
-(void)setPreferredStoreOfferVariant:(long long)arg1 ;
-(long long)preferredStoreOfferVariant;
-(MPStoreOfferMediaItemCollection *)collectionWithCompletionItems;
-(NSURL *)storeURL;
@end

