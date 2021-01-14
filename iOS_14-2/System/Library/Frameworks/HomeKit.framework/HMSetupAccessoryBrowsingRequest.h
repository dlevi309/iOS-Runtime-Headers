/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HMSetupAccessoryBrowsingRequest : NSObject <NSSecureCoding> {

	NSArray* _filterCategories;

}

@property (nonatomic,copy,readonly) NSArray * filterCategories;              //@synthesize filterCategories=_filterCategories - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithFilterCategories:(id)arg1 ;
-(NSArray *)filterCategories;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

