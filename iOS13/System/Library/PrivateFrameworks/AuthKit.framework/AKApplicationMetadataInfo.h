/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithResponseInfo:(id)arg1 ;
-(NSString *)authorizedAppListVersion;
-(NSDictionary *)teams;
@end

