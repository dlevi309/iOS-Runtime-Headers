/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,copy,readonly) NSString * recordType;                //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy,readonly) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                     //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSPredicate *)predicate;
-(id)init;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(id)CKPropertiesDescription;
-(NSString *)recordType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSArray *)sortDescriptors;
-(id)description;
-(void)setRecordType:(NSString *)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 ;
@end

