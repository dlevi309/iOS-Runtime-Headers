/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSDImageProvider, NSString, TSPObjectContext;

@interface TSDImageResamplingOperation : NSObject {

	TSDImageProvider* mImageProvider;
	CGSize mDesiredSize;
	NSString* mDisplayName;
	CGPathRef mMaskingPath;
	TSPObjectContext* mObjectContext;

}

@property (nonatomic,retain) TSDImageProvider * imageProvider; 
@property (assign,nonatomic) CGSize desiredSize; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,retain) TSPObjectContext * objectContext; 
@property (assign,nonatomic) CGPathRef maskingPath; 
-(id)init;
-(void)dealloc;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setImageProvider:(TSDImageProvider *)arg1 ;
-(CGSize)desiredSize;
-(void)setDesiredSize:(CGSize)arg1 ;
-(TSDImageProvider *)imageProvider;
-(TSPObjectContext *)objectContext;
-(id)initWithImageProvider:(id)arg1 desiredSize:(CGSize)arg2 ;
-(void)setObjectContext:(TSPObjectContext *)arg1 ;
-(void)setMaskingPath:(CGPathRef)arg1 ;
-(id)performResampleOperationWithResampleOptions:(unsigned long long)arg1 bitmapContextOptions:(unsigned long long)arg2 ;
-(CGPathRef)maskingPath;
@end

