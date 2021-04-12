/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(unsigned long long)persistentID;
-(id)valueForProperty:(id)arg1 ;
-(MPMediaItem *)representativeItem;
-(MPMediaLibrary *)mediaLibrary;
-(id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2 ;
-(MIPMultiverseIdentifier *)multiverseIdentifier;
-(id)genericModelObjectWithRequestedProperties:(id)arg1 ;
-(id)valuesForProperties:(id)arg1 ;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)invalidateCachedProperties;
-(id)cachedValueForProperty:(id)arg1 isCached:(BOOL*)arg2 ;
-(long long)preferredStoreOfferVariant;
-(BOOL)isDownloadable;
-(id)buyOfferForVariant:(long long)arg1 ;
-(id)buyOffer;
-(id)completionOfferForVariant:(long long)arg1 ;
-(BOOL)isDownloadableStoreOffer;
-(BOOL)isPurchasableStoreOffer;
@end

