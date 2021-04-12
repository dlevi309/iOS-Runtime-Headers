/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CLSPublicEventCategory : NSObject <NSSecureCoding> {

	NSString* _category;
	NSString* _localizedName;
	NSArray* _localizedSubcategories;

}

@property (nonatomic,retain) NSString * localizedName;                      //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSArray * localizedSubcategories;              //@synthesize localizedSubcategories=_localizedSubcategories - In the implementation block
@property (nonatomic,readonly) NSString * category;                         //@synthesize category=_category - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dance;
+(id)festivalsAndFairs;
+(id)appleEvents;
+(id)sports;
+(id)theater;
+(id)nightLife;
+(id)tours;
+(id)businessAndTechnology;
+(id)artsAndMuseums;
+(id)community;
+(id)familyEvents;
+(id)musicConcerts;
+(id)educational;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localizedName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)category;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCategory:(id)arg1 ;
-(NSArray *)localizedSubcategories;
-(unsigned long long)levelForLocalizedSubcategory:(id)arg1 ;
-(void)setLocalizedSubcategories:(NSArray *)arg1 ;
@end

