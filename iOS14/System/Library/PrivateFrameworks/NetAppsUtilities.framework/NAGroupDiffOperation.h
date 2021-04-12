/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

#import <libobjc.A.dylib/NADiffOperation.h>

@protocol NADiffableItemGroup;
@class NSString, NSNumber;

@interface NAGroupDiffOperation : NSObject <NADiffOperation> {

	unsigned long long _type;
	id<NADiffableItemGroup> _group;
	NSNumber* _fromIndex;
	NSNumber* _toIndex;

}

@property (nonatomic,readonly) id<NADiffableItemGroup> group;                     //@synthesize group=_group - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * fromIndex;                         //@synthesize fromIndex=_fromIndex - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * toIndex;                           //@synthesize toIndex=_toIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * operationDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deleteOperationWithGroup:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(id)moveOperationWithGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
+(id)insertOperationWithGroup:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id<NADiffableItemGroup>)group;
-(NSNumber *)toIndex;
-(NSNumber *)fromIndex;
-(NSString *)description;
-(id)initWithOperationType:(unsigned long long)arg1 group:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4 ;
-(id)_operationDescriptionWithVerboseType:(BOOL)arg1 ;
-(NSString *)operationDescription;
-(unsigned long long)type;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

