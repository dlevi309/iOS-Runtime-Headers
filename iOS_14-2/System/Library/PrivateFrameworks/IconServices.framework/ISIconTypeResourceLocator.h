/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithType:(id)arg1 ;
-(BOOL)allowLocalizedIcon;
-(void)encodeWithCoder:(id)arg1 ;
-(id)bundleIdentifier;
-(id)preferedResourceName;
-(NSString *)type;
-(id)resourceDirectoryURL;
-(id)initWithCoder:(id)arg1 ;
@end

