/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CRSIconLayoutPage : NSObject <NSSecureCoding> {

	NSArray* _icons;

}

@property (nonatomic,readonly) NSArray * icons;              //@synthesize icons=_icons - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)icons;
-(id)initWithIcons:(id)arg1 ;
@end

