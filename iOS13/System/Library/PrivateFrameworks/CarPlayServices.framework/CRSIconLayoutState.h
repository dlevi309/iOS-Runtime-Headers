/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CRSIconLayoutState : NSObject <NSSecureCoding> {

	NSArray* _pages;

}

@property (nonatomic,readonly) NSArray * pages;              //@synthesize pages=_pages - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)pages;
-(id)initWithPages:(id)arg1 ;
-(id)iconOrder;
@end

