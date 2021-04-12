/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLRecordChange.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface CPLItemChange : CPLRecordChange <NSSecureCoding, NSCopying> {

	NSArray* _containerRelations;

}

@property (nonatomic,copy) NSArray * containerRelations;              //@synthesize containerRelations=_containerRelations - In the implementation block
+(BOOL)cplShouldIgnorePropertyForCoding:(id)arg1 ;
-(id)init;
-(NSArray *)containerRelations;
-(void)setContainerRelations:(NSArray *)arg1 ;
-(id)propertiesForChangeType:(unsigned long long)arg1 ;
-(id)containerDescription;
-(id)containerRelationChangesComparedToRelationEnumerator:(id)arg1 error:(id*)arg2 ;
@end

