/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<SKUIArtworkProviding>)artworks;
-(id)artworkURLForSize:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setArtworks:(id<SKUIArtworkProviding>)arg1 ;
-(NSRange)ageBandRange;
-(id)largestArtworkURL;
@end

