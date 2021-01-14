/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableSelectedItemsStack.h>

@class NSArray, NSString;

@interface PXSelectedItemsStack : PXObservable <PXMutableSelectedItemsStack> {

	long long _depth;
	NSArray* _topItems;
	NSArray* _topItemReferences;

}

@property (nonatomic,copy) NSArray * topItemReferences;              //@synthesize topItemReferences=_topItemReferences - In the implementation block
@property (nonatomic,copy) NSArray * topItems;                       //@synthesize topItems=_topItems - In the implementation block
@property (nonatomic,readonly) long long depth;                      //@synthesize depth=_depth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setTopItemReferences:(NSArray *)arg1 ;
-(id)initWithDepth:(long long)arg1 ;
-(NSArray *)topItems;
-(void)updateWithSelectedItemsSnapshot:(id)arg1 ;
-(void)setTopItems:(NSArray *)arg1 ;
-(id)mutableChangeObject;
-(long long)depth;
-(void)performChanges:(/*^block*/id)arg1 ;
-(NSArray *)topItemReferences;
@end

