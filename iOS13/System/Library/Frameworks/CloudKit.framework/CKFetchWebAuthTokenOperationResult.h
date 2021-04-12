/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKOperationResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKFetchWebAuthTokenOperationResult : CKOperationResult <NSSecureCoding> {

	NSString* _webAuthToken;

}

@property (nonatomic,copy) NSString * webAuthToken;              //@synthesize webAuthToken=_webAuthToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSString *)webAuthToken;
-(void)setWebAuthToken:(NSString *)arg1 ;
@end

