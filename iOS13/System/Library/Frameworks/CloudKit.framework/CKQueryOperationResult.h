/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperationResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKQueryCursor;

@interface CKQueryOperationResult : CKOperationResult <NSSecureCoding> {

	CKQueryCursor* _cursor;

}

@property (nonatomic,retain) CKQueryCursor * cursor;              //@synthesize cursor=_cursor - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKQueryCursor *)cursor;
-(void)setCursor:(CKQueryCursor *)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
@end

