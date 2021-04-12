/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface AKApplicationMetadataInfo : NSObject <NSSecureCoding> {

	NSString* _authorizedAppListVersion;
	NSDictionary* _teams;

}

@property (nonatomic,copy,readonly) NSString * authorizedAppListVersion;              //@synthesize authorizedAppListVersion=_authorizedAppListVersion - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * teams;                             //@synthesize teams=_teams - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)teams;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)authorizedAppListVersion;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithResponseInfo:(id)arg1 ;
@end

