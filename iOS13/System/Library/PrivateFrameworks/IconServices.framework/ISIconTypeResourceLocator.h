/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/ISIconResourceLocator.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ISIconTypeResourceLocator : ISIconResourceLocator <NSSecureCoding> {

	NSString* _type;

}

@property (readonly) NSString * type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)bundleIdentifier;
-(id)initWithType:(id)arg1 ;
-(BOOL)allowLocalizedIcon;
-(id)preferedResourceName;
-(id)resourceDirectoryURL;
@end

