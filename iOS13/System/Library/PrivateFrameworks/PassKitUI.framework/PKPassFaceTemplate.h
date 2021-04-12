/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


#import <PassKitUI/PassKitUI-Structs.h>
@class PKPassFieldTemplate, NSMutableArray;

@interface PKPassFaceTemplate : NSObject {

	double _barcodeBottomInset;
	PKPassFieldTemplate* _defaultFieldTemplate;
	NSMutableArray* _bucketTemplates;
	CGSize _barcodeMaxSize;

}

@property (nonatomic,retain) NSMutableArray * bucketTemplates;                        //@synthesize bucketTemplates=_bucketTemplates - In the implementation block
@property (assign,nonatomic) double barcodeBottomInset;                               //@synthesize barcodeBottomInset=_barcodeBottomInset - In the implementation block
@property (assign,nonatomic) CGSize barcodeMaxSize;                                   //@synthesize barcodeMaxSize=_barcodeMaxSize - In the implementation block
@property (nonatomic,retain) PKPassFieldTemplate * defaultFieldTemplate;              //@synthesize defaultFieldTemplate=_defaultFieldTemplate - In the implementation block
-(void)setBarcodeBottomInset:(double)arg1 ;
-(void)setBarcodeMaxSize:(CGSize)arg1 ;
-(PKPassFieldTemplate *)defaultFieldTemplate;
-(void)addBucketTemplate:(id)arg1 ;
-(id)templateForBucketAtIndex:(unsigned long long)arg1 ;
-(double)barcodeBottomInset;
-(CGSize)barcodeMaxSize;
-(void)setDefaultFieldTemplate:(PKPassFieldTemplate *)arg1 ;
-(NSMutableArray *)bucketTemplates;
-(void)setBucketTemplates:(NSMutableArray *)arg1 ;
@end

