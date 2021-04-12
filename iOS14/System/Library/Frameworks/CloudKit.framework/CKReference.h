/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) unsigned long long referenceAction;              //@synthesize referenceAction=_referenceAction - In the implementation block
@property (nonatomic,copy,readonly) CKRecordID * recordID;                      //@synthesize recordID=_recordID - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)ckReferenceActionForCKDPRecordReferenceType:(int)arg1 ;
+(int)ckdpReferenceTypeForCKReferenceAction:(unsigned long long)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)init;
-(id)ckShortDescription;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_initBare;
-(CKRecordID *)recordID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)referenceAction;
-(id)initWithRecord:(id)arg1 action:(unsigned long long)arg2 ;
-(id)initWithRecordID:(id)arg1 action:(unsigned long long)arg2 ;
@end

