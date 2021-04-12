/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * operationDescription; 
+(id)deleteOperationWithGroup:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(id)moveOperationWithGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
+(id)insertOperationWithGroup:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)type;
-(NSString *)operationDescription;
-(id<NADiffableItemGroup>)group;
-(NSNumber *)fromIndex;
-(NSNumber *)toIndex;
-(id)initWithOperationType:(unsigned long long)arg1 group:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4 ;
-(id)_operationDescriptionWithVerboseType:(BOOL)arg1 ;
@end

