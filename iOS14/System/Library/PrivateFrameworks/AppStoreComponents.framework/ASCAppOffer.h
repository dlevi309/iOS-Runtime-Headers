/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/ASCOffer.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ASCAdamID, NSDictionary, NSNumber, NSArray, NSString, NSURL;

@interface ASCAppOffer : NSObject <ASCOffer, NSSecureCoding, NSCopying> {

	ASCAdamID* _id;
	NSDictionary* _titles;
	NSDictionary* _subtitles;
	long long _flags;
	NSNumber* _ageRating;
	NSArray* _metrics;
	NSString* _baseBuyParams;
	NSString* _metricsBuyParams;
	NSDictionary* _additionalHeaders;
	NSURL* _preflightPackageURL;
	NSString* _bundleID;
	NSString* _itemName;
	NSString* _vendorName;

}

@property (nonatomic,copy,readonly) NSString * baseBuyParams;                      //@synthesize baseBuyParams=_baseBuyParams - In the implementation block
@property (nonatomic,copy,readonly) NSString * metricsBuyParams;                   //@synthesize metricsBuyParams=_metricsBuyParams - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * additionalHeaders;              //@synthesize additionalHeaders=_additionalHeaders - In the implementation block
@property (nonatomic,copy,readonly) NSURL * preflightPackageURL;                   //@synthesize preflightPackageURL=_preflightPackageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemName;                           //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy,readonly) NSString * vendorName;                         //@synthesize vendorName=_vendorName - In the implementation block
@property (nonatomic,copy,readonly) ASCAdamID * id;                                //@synthesize id=_id - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * titles;                         //@synthesize titles=_titles - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * subtitles;                      //@synthesize subtitles=_subtitles - In the implementation block
@property (nonatomic,readonly) long long flags;                                    //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSNumber * ageRating;                               //@synthesize ageRating=_ageRating - In the implementation block
@property (nonatomic,readonly) NSArray * metrics;                                  //@synthesize metrics=_metrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(ASCAdamID *)id;
-(NSArray *)metrics;
-(NSString *)vendorName;
-(NSURL *)preflightPackageURL;
-(long long)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)itemName;
-(NSString *)description;
-(NSNumber *)ageRating;
-(NSDictionary *)additionalHeaders;
-(NSDictionary *)subtitles;
-(NSString *)bundleID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)titles;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)offerWithMetrics:(id)arg1 ;
-(id)initWithID:(id)arg1 titles:(id)arg2 subtitles:(id)arg3 flags:(long long)arg4 ageRating:(id)arg5 metrics:(id)arg6 baseBuyParams:(id)arg7 metricsBuyParams:(id)arg8 additionalHeaders:(id)arg9 preflightPackageURL:(id)arg10 bundleID:(id)arg11 itemName:(id)arg12 vendorName:(id)arg13 ;
-(NSString *)baseBuyParams;
-(NSString *)metricsBuyParams;
@end

