/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFDiffOperation.h>

@class NSIndexPath, NSString;

@interface HFItemDiffOperation : NSObject <HFDiffOperation> {

	unsigned long long _type;
	id _item;
	NSIndexPath* _fromIndexPath;
	NSIndexPath* _toIndexPath;

}

@property (nonatomic,readonly) id item;                                           //@synthesize item=_item - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * fromIndexPath;                  //@synthesize fromIndexPath=_fromIndexPath - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * toIndexPath;                    //@synthesize toIndexPath=_toIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * operationDescription; 
+(id)reloadOperationWithItem:(id)arg1 atIndexPath:(id)arg2 ;
+(id)deleteOperationWithItem:(id)arg1 atIndexPath:(id)arg2 ;
+(id)moveOperationWithItem:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
+(id)insertOperationWithItem:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)type;
-(id)item;
-(NSString *)operationDescription;
-(id)_operationDescriptionWithVerboseType:(BOOL)arg1 ;
-(id)initWithOperationType:(unsigned long long)arg1 item:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4 ;
-(NSIndexPath *)fromIndexPath;
-(NSIndexPath *)toIndexPath;
@end
