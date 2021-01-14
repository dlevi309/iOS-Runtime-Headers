/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WLSafeHarborMigrationSpecifier : NSObject <NSSecureCoding> {

	NSString* _bundleID;
	NSString* _contentType;
	NSString* _dataType;

}

@property (nonatomic,copy) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * contentType;              //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy) NSString * dataType;                 //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)dataType;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setDataType:(NSString *)arg1 ;
-(NSString *)contentType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(void)setContentType:(NSString *)arg1 ;
-(id)initWithBundleID:(id)arg1 contentType:(id)arg2 dataType:(id)arg3 ;
@end

