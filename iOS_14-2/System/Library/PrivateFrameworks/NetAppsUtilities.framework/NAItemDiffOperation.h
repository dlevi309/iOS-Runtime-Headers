/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

#import <libobjc.A.dylib/NADiffOperation.h>

@class NSIndexPath, NSString;

@interface NAItemDiffOperation : NSObject <NADiffOperation> {

	unsigned long long _type;
	id _item;
	NSIndexPath* _fromIndexPath;
	NSIndexPath* _toIndexPath;

}

@property (nonatomic,readonly) id item;                                           //@synthesize item=_item - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * fromIndexPath;                  //@synthesize fromIndexPath=_fromIndexPath - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * toIndexPath;                    //@synthesize toIndexPath=_toIndexPath - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * operationDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reloadOperationWithItem:(id)arg1 atIndexPath:(id)arg2 ;
+(id)deleteOperationWithItem:(id)arg1 atIndexPath:(id)arg2 ;
+(id)moveOperationWithItem:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
+(id)insertOperationWithItem:(id)arg1 atIndexPath:(id)arg2 ;
-(id)item;
-(NSString *)description;
-(id)_operationDescriptionWithVerboseType:(BOOL)arg1 ;
-(id)initWithOperationType:(unsigned long long)arg1 item:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4 ;
-(NSIndexPath *)fromIndexPath;
-(NSIndexPath *)toIndexPath;
-(NSString *)operationDescription;
-(unsigned long long)type;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end
