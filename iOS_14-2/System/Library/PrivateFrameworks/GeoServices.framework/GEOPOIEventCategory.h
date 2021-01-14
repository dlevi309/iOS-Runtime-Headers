/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface GEOPOIEventCategory : NSObject <NSSecureCoding> {

	NSString* _category;
	NSArray* _localizedNames;

}

@property (nonatomic,readonly) NSString * category;                   //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSArray * localizedNames;              //@synthesize localizedNames=_localizedNames - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)poiEventCategoriesForEventCategories:(id)arg1 ;
-(NSArray *)localizedNames;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)category;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithEventCategory:(id)arg1 ;
-(id)parsePDCategories:(id)arg1 ;
-(BOOL)isEqualToPOIEventCategory:(id)arg1 ;
-(id)initWithCategory:(id)arg1 localizedNames:(id)arg2 ;
@end

