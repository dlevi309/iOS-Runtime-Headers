/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

