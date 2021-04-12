/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HMSetupAccessoryBrowsingRequest : NSObject <NSSecureCoding> {

	NSArray* _filterCategories;

}

@property (nonatomic,copy,readonly) NSArray * filterCategories;              //@synthesize filterCategories=_filterCategories - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFilterCategories:(id)arg1 ;
-(NSArray *)filterCategories;
@end

