/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKEncryptedData.h>
#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKReference, NSString;

@interface CKEncryptedReference : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (nonatomic,readonly) CKReference * reference; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)value;
-(id)initWithReference:(id)arg1 ;
-(id)_pReferenceFromReference:(id)arg1 ;
-(id)_referenceFromPReference:(id)arg1 ;
-(CKReference *)reference;
-(id)_recordIDFromPRecordIdentifier:(id)arg1 ;
@end

