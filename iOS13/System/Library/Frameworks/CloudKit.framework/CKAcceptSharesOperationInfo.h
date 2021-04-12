/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKAcceptSharesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _shareMetadatasToAccept;

}

@property (nonatomic,retain) NSArray * shareMetadatasToAccept;              //@synthesize shareMetadatasToAccept=_shareMetadatasToAccept - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)databaseScope;
-(void)setShareMetadatasToAccept:(NSArray *)arg1 ;
-(NSArray *)shareMetadatasToAccept;
@end

