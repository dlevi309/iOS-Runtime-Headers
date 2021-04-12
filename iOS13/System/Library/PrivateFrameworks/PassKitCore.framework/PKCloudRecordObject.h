/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKCloudRecordObject : NSObject <NSSecureCoding> {

	NSArray* _records;

}

@property (nonatomic,readonly) NSArray * records;                               //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) NSObject*<PKCloudStoreCoding> item; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<PKCloudStoreCoding>)item;
-(NSArray *)records;
-(id)initWithRecords:(id)arg1 ;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(id)_descriptionWithDetailedOutput:(BOOL)arg1 ;
@end

