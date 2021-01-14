/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MCDeviceUploadCredentials : NSObject <NSSecureCoding> {

	NSString* _dsid;
	NSString* _dsToken;

}

@property (nonatomic,readonly) NSString * dsid;                 //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,readonly) NSString * dsToken;              //@synthesize dsToken=_dsToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)dsid;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)dsToken;
-(id)initWithDsid:(id)arg1 dsToken:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end

