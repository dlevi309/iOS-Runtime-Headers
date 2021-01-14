/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(NSNumber *)storeItemIdentifier;
-(void)setStoreIdentifier:(SKUIStoreIdentifier *)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SKUIStoreIdentifier *)storeIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)storeFlavorIdentifier;
-(void)setStoreFlavorIdentifier:(NSString *)arg1 ;
@end

