/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSSet;

@interface PKCloudRecordObject : NSObject <NSSecureCoding> {

	NSMutableDictionary* _recordIDToRecord;

}

@property (nonatomic,readonly) NSSet * records; 
@property (nonatomic,readonly) NSObject*<PKCloudStoreCoding> item; 
+(BOOL)supportsSecureCoding;
-(NSSet *)records;
-(NSObject*<PKCloudStoreCoding>)item;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRecords:(id)arg1 ;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(void)applyCloudRecordObject:(id)arg1 ;
-(id)description;
-(id)_descriptionWithDetailedOutput:(BOOL)arg1 ;
-(id)primaryIdentifier;
-(id)initWithCoder:(id)arg1 ;
@end

