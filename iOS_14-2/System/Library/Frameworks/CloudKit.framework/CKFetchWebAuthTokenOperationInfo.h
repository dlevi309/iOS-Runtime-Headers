/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKFetchWebAuthTokenOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSString* _APIToken;

}

@property (nonatomic,retain) NSString * APIToken;              //@synthesize APIToken=_APIToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)APIToken;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAPIToken:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

