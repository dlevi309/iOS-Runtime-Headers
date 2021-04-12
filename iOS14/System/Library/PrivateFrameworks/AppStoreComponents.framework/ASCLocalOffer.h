/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/ASCOffer.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ASCOfferMetadata, ASCAdamID, NSDictionary, NSNumber, NSArray, NSString;

@interface ASCLocalOffer : NSObject <ASCOffer, NSCopying> {

	ASCOfferMetadata* _metadata;
	/*^block*/id _action;

}

@property (nonatomic,readonly) ASCOfferMetadata * metadata;                //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) id action;                             //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) ASCAdamID * id; 
@property (nonatomic,copy,readonly) NSDictionary * titles; 
@property (nonatomic,copy,readonly) NSDictionary * subtitles; 
@property (nonatomic,readonly) long long flags; 
@property (nonatomic,readonly) NSNumber * ageRating; 
@property (nonatomic,readonly) NSArray * metrics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ASCAdamID *)id;
-(id)price;
-(NSArray *)metrics;
-(long long)flags;
-(id)action;
-(NSString *)description;
-(NSNumber *)ageRating;
-(id)formattedPrice;
-(NSDictionary *)subtitles;
-(unsigned long long)hash;
-(NSDictionary *)titles;
-(ASCOfferMetadata *)metadata;
-(id)initWithMetadata:(id)arg1 action:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)offerWithMetrics:(id)arg1 ;
@end

