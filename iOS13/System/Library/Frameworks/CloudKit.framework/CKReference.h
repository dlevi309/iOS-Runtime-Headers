/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordID, NSString;

@interface CKReference : NSObject <CKRecordValue, NSSecureCoding, NSCopying> {

	unsigned long long _referenceAction;
	CKRecordID* _recordID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) CKRecordID * recordID;                               //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) unsigned long long referenceAction;              //@synthesize referenceAction=_referenceAction - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)ckReferenceActionForCKDPRecordReferenceType:(int)arg1 ;
+(int)ckdpReferenceTypeForCKReferenceAction:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKRecordID *)recordID;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(id)CKPropertiesDescription;
-(id)ckShortDescription;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(unsigned long long)referenceAction;
-(id)initWithRecord:(id)arg1 action:(unsigned long long)arg2 ;
-(id)initWithRecordID:(id)arg1 action:(unsigned long long)arg2 ;
-(id)_initBare;
@end

