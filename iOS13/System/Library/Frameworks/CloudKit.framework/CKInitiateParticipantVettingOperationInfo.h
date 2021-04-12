/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKShareMetadata, NSString;

@interface CKInitiateParticipantVettingOperationInfo : CKOperationInfo <NSSecureCoding> {

	CKShareMetadata* _shareMetadata;
	NSString* _participantID;
	NSString* _address;

}

@property (nonatomic,retain) CKShareMetadata * shareMetadata;              //@synthesize shareMetadata=_shareMetadata - In the implementation block
@property (nonatomic,copy) NSString * participantID;                       //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,copy) NSString * address;                             //@synthesize address=_address - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)address;
-(CKShareMetadata *)shareMetadata;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(void)setShareMetadata:(CKShareMetadata *)arg1 ;
@end

