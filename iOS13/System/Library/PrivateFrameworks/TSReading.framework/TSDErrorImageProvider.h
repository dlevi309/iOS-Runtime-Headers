/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDImageProvider.h>

@interface TSDErrorImageProvider : TSDImageProvider
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
+(id)_singletonAlloc;
-(unsigned long long)retainCount;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(CGSize)naturalSize;
-(BOOL)isError;
-(void)drawImageInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(CGPDFDocumentRef)p_iconPDFDocument;
@end

