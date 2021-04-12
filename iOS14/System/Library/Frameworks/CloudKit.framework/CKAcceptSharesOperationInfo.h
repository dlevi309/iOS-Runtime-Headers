/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setShareMetadatasToAccept:(NSArray *)arg1 ;
-(NSArray *)shareMetadatasToAccept;
-(id)initWithCoder:(id)arg1 ;
-(long long)databaseScope;
@end

