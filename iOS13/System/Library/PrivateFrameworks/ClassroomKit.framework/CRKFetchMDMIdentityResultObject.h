/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSData, NSString;

@interface CRKFetchMDMIdentityResultObject : CATTaskResultObject {

	NSData* _mdmIdentityPersistentID;
	NSString* _mdmIdentityCommonName;

}

@property (nonatomic,retain) NSData * mdmIdentityPersistentID;              //@synthesize mdmIdentityPersistentID=_mdmIdentityPersistentID - In the implementation block
@property (nonatomic,retain) NSString * mdmIdentityCommonName;              //@synthesize mdmIdentityCommonName=_mdmIdentityCommonName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)mdmIdentityPersistentID;
-(NSString *)mdmIdentityCommonName;
-(void)setMdmIdentityPersistentID:(NSData *)arg1 ;
-(void)setMdmIdentityCommonName:(NSString *)arg1 ;
@end

