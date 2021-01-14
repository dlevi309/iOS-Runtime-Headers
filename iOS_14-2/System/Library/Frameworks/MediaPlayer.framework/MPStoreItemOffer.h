/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray, NSString, NSNumber;

@interface MPStoreItemOffer : NSObject <NSSecureCoding> {

	NSDictionary* _lookupDictionary;

}

@property (nonatomic,copy,readonly) NSArray * assets; 
@property (nonatomic,copy,readonly) NSString * buyParameters; 
@property (nonatomic,copy,readonly) NSString * formattedPrice; 
@property (nonatomic,copy,readonly) NSString * offerType; 
@property (nonatomic,copy,readonly) NSNumber * price; 
@property (nonatomic,copy,readonly) NSDictionary * lookupDictionary;              //@synthesize lookupDictionary=_lookupDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)assets;
-(NSNumber *)price;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)buyParameters;
-(NSString *)formattedPrice;
-(id)initWithLookupDictionary:(id)arg1 ;
-(id)actionTextForType:(id)arg1 ;
-(NSDictionary *)lookupDictionary;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)offerType;
-(BOOL)isEqual:(id)arg1 ;
@end

