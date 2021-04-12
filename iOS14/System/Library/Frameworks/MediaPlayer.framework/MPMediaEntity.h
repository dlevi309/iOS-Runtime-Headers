/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MIPMultiverseIdentifier, MPMediaLibrary, MPMediaItem;

@interface MPMediaEntity : NSObject <NSCopying, NSSecureCoding> {

	MIPMultiverseIdentifier* _multiverseIdentifier;

}

@property (nonatomic,readonly) BOOL isDownloadable; 
@property (nonatomic,readonly) BOOL isDownloadableStoreOffer; 
@property (nonatomic,readonly) BOOL isPurchasableStoreOffer; 
@property (nonatomic,readonly) long long preferredStoreOfferVariant; 
@property (nonatomic,readonly) MPMediaLibrary * mediaLibrary; 
@property (nonatomic,readonly) MPMediaItem * representativeItem; 
@property (nonatomic,readonly) MIPMultiverseIdentifier * multiverseIdentifier;              //@synthesize multiverseIdentifier=_multiverseIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long persistentID; 
+(BOOL)supportsSecureCoding;
+(BOOL)canFilterByProperty:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)buyOffer;
-(long long)preferredStoreOfferVariant;
-(id)buyOfferForVariant:(long long)arg1 ;
-(BOOL)isDownloadableStoreOffer;
-(BOOL)isPurchasableStoreOffer;
-(id)completionOfferForVariant:(long long)arg1 ;
-(id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2 ;
-(MIPMultiverseIdentifier *)multiverseIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)genericModelObjectWithRequestedProperties:(id)arg1 ;
-(id)valuesForProperties:(id)arg1 ;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isDownloadable;
-(void)invalidateCachedProperties;
-(id)cachedValueForProperty:(id)arg1 isCached:(BOOL*)arg2 ;
-(MPMediaItem *)representativeItem;
-(unsigned long long)persistentID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

