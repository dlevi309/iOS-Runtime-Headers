/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)category;
-(NSArray *)localizedNames;
-(id)initWithEventCategory:(id)arg1 ;
-(id)parsePDCategories:(id)arg1 ;
-(BOOL)isEqualToPOIEventCategory:(id)arg1 ;
-(id)initWithCategory:(id)arg1 localizedNames:(id)arg2 ;
@end

