/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CRSIconLayoutState : NSObject <NSSecureCoding> {

	NSArray* _pages;

}

@property (nonatomic,readonly) NSArray * pages;              //@synthesize pages=_pages - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)pages;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPages:(id)arg1 ;
-(id)iconOrder;
@end

