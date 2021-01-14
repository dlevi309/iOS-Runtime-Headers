/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@interface PKCoreSpotlightUtilities : NSObject
+(id)spotlightIdentifierForTransactionIdentifier:(id)arg1 ;
+(void)searchableItemForPass:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)spotlightIdentifierForPassUniqueIdentifier:(id)arg1 ;
+(CGSize)_thumbnailImageSizeForSourceImageSize:(CGSize)arg1 ;
+(void)searchableItemForTransaction:(id)arg1 passUniqueIdentifier:(id)arg2 regions:(id)arg3 tags:(id)arg4 keywords:(id)arg5 imageGenerator:(id)arg6 contactResolver:(id)arg7 completion:(/*^block*/id)arg8 ;
+(id)passUniqueIdentifierFromSpotlightIdentifier:(id)arg1 ;
+(id)transactionIdentifierFromSpotlightIdentifier:(id)arg1 ;
@end

