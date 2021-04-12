/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSPData, TSUFlushingManager;

@interface TSDImageProvider : NSObject {

	int mLoadState;
	TSPData* mImageData;
	TSUFlushingManager* mFlushingManager;
	int mInterest;
	os_unfair_lock_s mInterestLock;
	atomic<int> mRetainCount;
	atomic<int> mOwnerCount;

}

@property (nonatomic,readonly) unsigned long long imageGamut; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(BOOL)isValid;
-(void)flush;
-(id)initWithImageData:(id)arg1 ;
-(id)imageData;
-(CGSize)naturalSize;
-(int)interest;
-(BOOL)isError;
-(void)addInterest;
-(void)removeInterest;
-(void)drawImageInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(void)flushIfInterestLessThan:(int)arg1 ;
-(CGSize)dpiAdjustedNaturalSize;
-(unsigned long long)imageGamut;
-(void)i_commonInit;
-(BOOL)hasFlushableContent;
-(void)setFlushingManager:(id)arg1 ;
-(void)addOwner;
-(void)removeOwner;
-(void)ownerAccess;
@end

