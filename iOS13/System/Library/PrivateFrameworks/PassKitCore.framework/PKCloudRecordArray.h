/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface PKCloudRecordArray : NSObject <NSSecureCoding> {

	NSMutableArray* _cloudRecords;

}

@property (nonatomic,readonly) NSArray * cloudRecords; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)allItems;
-(void)addValuesFromCloudRecordArray:(id)arg1 ;
-(NSArray *)cloudRecords;
-(void)addCloudRecord:(id)arg1 ;
-(id)allRecordsWithRecordType:(id)arg1 ;
-(id)_descriptionWithDetailedOutput:(BOOL)arg1 includeItem:(BOOL)arg2 ;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(id)filteredCloudRecordArrayWithPredicate:(id)arg1 ;
-(id)allRecordNames;
@end

