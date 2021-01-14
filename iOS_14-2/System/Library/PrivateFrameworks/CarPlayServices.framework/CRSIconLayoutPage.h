/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CRSIconLayoutPage : NSObject <NSSecureCoding> {

	NSArray* _icons;

}

@property (nonatomic,readonly) NSArray * icons;              //@synthesize icons=_icons - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)icons;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIcons:(id)arg1 ;
@end

