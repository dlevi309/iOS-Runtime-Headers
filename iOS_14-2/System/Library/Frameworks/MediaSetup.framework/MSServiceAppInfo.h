/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface MSServiceAppInfo : NSObject <NSSecureCoding> {

	NSString* _serviceName;
	NSString* _serviceBundleID;
	NSArray* _alternateBundleIDS;

}

@property (nonatomic,copy,readonly) NSString * serviceName;                  //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceBundleID;              //@synthesize serviceBundleID=_serviceBundleID - In the implementation block
@property (nonatomic,retain) NSArray * alternateBundleIDS;                   //@synthesize alternateBundleIDS=_alternateBundleIDS - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)serviceName;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 serviceBundleID:(id)arg2 ;
-(NSString *)serviceBundleID;
-(NSArray *)alternateBundleIDS;
-(void)setAlternateBundleIDS:(NSArray *)arg1 ;
@end

