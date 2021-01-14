/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface ICLocalStoreAccountProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _storefrontIdentifier;

}

@property (nonatomic,copy,readonly) NSDictionary * propertyListRepresentation; 
@property (nonatomic,copy,readonly) NSString * storefrontIdentifier; 
+(BOOL)supportsSecureCoding;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(NSDictionary *)propertyListRepresentation;
-(NSString *)storefrontIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)_copyLocalStoreAccountPropertiesToOtherInstance:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

