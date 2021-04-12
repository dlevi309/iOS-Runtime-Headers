/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSPredicate, NSArray;

@interface CKQuery : NSObject <NSSecureCoding, NSCopying> {

	NSString* _recordType;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;

}

@property (nonatomic,copy) NSPredicate * predicate;                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSString * recordType;                  //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSString *)recordType;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 ;
-(id)CKPropertiesDescription;
-(void)setRecordType:(NSString *)arg1 ;
@end

