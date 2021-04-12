/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PHCloudIdentifier : NSObject <NSSecureCoding> {

	NSString* _localCloudIdentifier;
	NSString* _identifierCode;

}

@property (nonatomic,readonly) NSString * localCloudIdentifier;              //@synthesize localCloudIdentifier=_localCloudIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * identifierCode;                    //@synthesize identifierCode=_identifierCode - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
+(BOOL)supportsSecureCoding;
+(id)notFoundIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSString *)identifierCode;
-(id)description;
-(id)initWithStringValue:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLocalCloudIdentifier:(id)arg1 identifierCode:(id)arg2 ;
-(id)initAsNotFoundIdentifier;
-(NSString *)localCloudIdentifier;
@end

