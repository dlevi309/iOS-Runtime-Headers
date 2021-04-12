/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKFetchShareParticipantsOperationInfo : CKOperationInfo <NSSecureCoding> {

	NSArray* _userIdentityLookupInfos;

}

@property (nonatomic,copy) NSArray * userIdentityLookupInfos;              //@synthesize userIdentityLookupInfos=_userIdentityLookupInfos - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUserIdentityLookupInfos:(NSArray *)arg1 ;
-(NSArray *)userIdentityLookupInfos;
@end

