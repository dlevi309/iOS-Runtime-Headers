/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)theater;
+(id)musicConcerts;
+(id)nightLife;
+(id)dance;
+(id)festivalsAndFairs;
+(id)artsAndMuseums;
+(id)sports;
+(id)businessAndTechnology;
+(id)community;
+(id)educational;
+(id)familyEvents;
+(id)tours;
+(id)appleEvents;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)category;
-(NSString *)localizedName;
-(id)initWithCategory:(id)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(unsigned long long)levelForLocalizedSubcategory:(id)arg1 ;
-(NSArray *)localizedSubcategories;
-(void)setLocalizedSubcategories:(NSArray *)arg1 ;
@end

