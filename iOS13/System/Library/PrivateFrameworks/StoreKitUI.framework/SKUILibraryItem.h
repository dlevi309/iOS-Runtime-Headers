/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SKUIStoreIdentifier, NSString, NSNumber;

@interface SKUILibraryItem : NSObject <NSCopying> {

	SKUIStoreIdentifier* _storeIdentifier;
	NSString* _storeFlavorIdentifier;

}

@property (nonatomic,copy) SKUIStoreIdentifier * storeIdentifier;              //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * storeItemIdentifier; 
@property (nonatomic,copy) NSString * storeFlavorIdentifier;                   //@synthesize storeFlavorIdentifier=_storeFlavorIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SKUIStoreIdentifier *)storeIdentifier;
-(void)setStoreIdentifier:(SKUIStoreIdentifier *)arg1 ;
-(NSNumber *)storeItemIdentifier;
-(NSString *)storeFlavorIdentifier;
-(void)setStoreFlavorIdentifier:(NSString *)arg1 ;
@end

