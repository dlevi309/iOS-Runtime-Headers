/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFDiffOperation.h>

@protocol HFDiffableItemGroup;
@class NSString, NSNumber;

@interface HFGroupDiffOperation : NSObject <HFDiffOperation> {

	unsigned long long _type;
	id<HFDiffableItemGroup> _group;
	NSNumber* _fromIndex;
	NSNumber* _toIndex;

}

@property (nonatomic,readonly) id<HFDiffableItemGroup> group;                     //@synthesize group=_group - In the implementation block
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
-(id<HFDiffableItemGroup>)group;
-(NSNumber *)fromIndex;
-(NSNumber *)toIndex;
-(id)initWithOperationType:(unsigned long long)arg1 group:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4 ;
-(id)_operationDescriptionWithVerboseType:(BOOL)arg1 ;
@end

