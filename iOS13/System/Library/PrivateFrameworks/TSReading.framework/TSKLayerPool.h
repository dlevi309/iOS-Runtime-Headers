/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSMutableArray;

@interface TSKLayerPool : NSObject {

	NSMutableArray* mLayerPool;
	Class mLayerClass;
	id mLayerDelegate;

}

@property (assign,nonatomic) id layerDelegate; 
@property (assign,nonatomic) Class layerClass; 
-(id)init;
-(void)dealloc;
-(Class)layerClass;
-(id)layerDelegate;
-(id)requestLayerFromPool;
-(void)returnLayerToPool:(id)arg1 ;
-(void)setLayerClass:(Class)arg1 ;
-(void)setLayerDelegate:(id)arg1 ;
@end

