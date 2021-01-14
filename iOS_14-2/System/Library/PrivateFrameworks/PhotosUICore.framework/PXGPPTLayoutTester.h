/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGGeneratedLayoutDelegate.h>

@class NSArray, NSString;

@interface PXGPPTLayoutTester : NSObject <PXGGeneratedLayoutDelegate> {

	NSArray* _inputItems;

}

@property (nonatomic,retain) NSArray * inputItems;                  //@synthesize inputItems=_inputItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mockPaddingValues;
-(void)setInputItems:(NSArray *)arg1 ;
-(void)runGridLayoutTestWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)runEditorialLayoutTestWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_iterateGridConfigurationsForItemsCount:(long long)arg1 itemsIncrement:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_iterateEditorialConfigurationsForItemsCount:(long long)arg1 itemsIncrement:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(CGRect)generatedLayout:(id)arg1 bestCropRectForInputItemAtIndex:(unsigned)arg2 withAspectRatio:(double)arg3 ;
-(NSArray *)inputItems;
-(id)generatedLayout:(id)arg1 objectReferenceAtIndex:(unsigned)arg2 ;
-(id)generatedLayout:(id)arg1 inputItemAtIndex:(unsigned)arg2 ;
@end

