/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContainerRelations:(NSArray *)arg1 ;
-(id)init;
-(NSArray *)containerRelations;
-(id)propertiesForChangeType:(unsigned long long)arg1 ;
-(id)containerDescription;
-(id)containerRelationChangesComparedToRelationEnumerator:(id)arg1 error:(id*)arg2 ;
@end

