/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface MKPointOfInterestFilter : NSObject <NSSecureCoding, NSCopying> {

	NSSet* _includedCategories;
	NSSet* _excludedCategories;

}
+(BOOL)supportsSecureCoding;
+(id)filterIncludingAllCategories;
+(id)filterExcludingAllCategories;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_geoPOICategoryFilter;
-(BOOL)_excludesAllCategories;
-(id)initExcludingCategories:(id)arg1 ;
-(id)initIncludingCategories:(id)arg1 ;
-(BOOL)isEqualToPointOfInterestFilter:(id)arg1 ;
-(BOOL)_includesAllCategories;
-(id)initIncludingCategories:(id)arg1 excludingCategories:(id)arg2 ;
-(BOOL)includesCategory:(id)arg1 ;
-(BOOL)excludesCategory:(id)arg1 ;
@end

