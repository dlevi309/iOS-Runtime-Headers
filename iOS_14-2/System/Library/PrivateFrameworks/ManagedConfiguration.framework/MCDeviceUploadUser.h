/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MCDeviceUploadUser : NSObject <NSSecureCoding> {

	NSString* _dsid;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * dsid;              //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)dsid;
-(id)initWithDsid:(id)arg1 name:(id)arg2 ;
-(id)initWithApproverDict:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)initWithCoder:(id)arg1 ;
@end

