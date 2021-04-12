/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)dsid;
-(id)initWithDsid:(id)arg1 name:(id)arg2 ;
-(id)initWithApproverDict:(id)arg1 ;
@end

