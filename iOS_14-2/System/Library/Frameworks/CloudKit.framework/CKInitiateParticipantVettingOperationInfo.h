/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setShareMetadata:(CKShareMetadata *)arg1 ;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKShareMetadata *)shareMetadata;
@end

