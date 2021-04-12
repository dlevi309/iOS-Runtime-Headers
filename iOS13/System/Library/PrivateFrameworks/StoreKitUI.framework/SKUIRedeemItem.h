/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol SKUIArtworkProviding;
@class NSString;

@interface SKUIRedeemItem : SKUIItem <NSSecureCoding> {

	id<SKUIArtworkProviding> _artworks;

}

@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) long long itemIdentifier; 
@property (nonatomic,retain) id<SKUIArtworkProviding> artworks;              //@synthesize artworks=_artworks - In the implementation block
@property (assign,nonatomic) long long itemKind; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<SKUIArtworkProviding>)artworks;
-(void)setArtworks:(id<SKUIArtworkProviding>)arg1 ;
-(id)artworkURLForSize:(long long)arg1 ;
-(NSRange)ageBandRange;
-(id)largestArtworkURL;
@end

