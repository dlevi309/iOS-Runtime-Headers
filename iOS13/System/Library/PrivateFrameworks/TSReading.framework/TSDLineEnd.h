/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TSDLineEnd : NSObject <NSCopying> {

	CGPathRef mPath;
	CGPathRef mWrapPath;
	CGPoint mEndPoint;
	BOOL mIsFilled;
	NSString* mIdentifier;
	int mLineJoin;

}

@property (nonatomic,readonly) CGPathRef path; 
@property (nonatomic,readonly) CGPathRef wrapPath; 
@property (nonatomic,readonly) CGPoint endPoint; 
@property (nonatomic,readonly) BOOL isFilled; 
@property (nonatomic,readonly) BOOL isNone; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) int lineJoin; 
+(id)line;
+(id)lineEndWithPath:(CGPathRef)arg1 wrapPath:(CGPathRef)arg2 endPoint:(CGPoint)arg3 isFilled:(BOOL)arg4 identifier:(id)arg5 ;
+(id)lineEndWithIdentifier:(id)arg1 ;
+(id)lineEndWithPath:(CGPathRef)arg1 endPoint:(CGPoint)arg2 isFilled:(BOOL)arg3 identifier:(id)arg4 ;
+(id)simpleArrow;
+(id)filledCircle;
+(id)filledDiamond;
+(id)openArrow;
+(id)filledArrow;
+(id)filledSquare;
+(id)openSquare;
+(id)openCircle;
+(id)invertedArrow;
+(id)none;
+(id)lineEndWithType:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(CGPathRef)path;
-(int)lineJoin;
-(CGPoint)endPoint;
-(BOOL)isNone;
-(BOOL)isFilled;
-(id)initWithPath:(CGPathRef)arg1 wrapPath:(CGPathRef)arg2 endPoint:(CGPoint)arg3 isFilled:(BOOL)arg4 identifier:(id)arg5 lineJoin:(int)arg6 ;
-(id)initWithPath:(CGPathRef)arg1 endPoint:(CGPoint)arg2 isFilled:(BOOL)arg3 identifier:(id)arg4 ;
-(CGPathRef)wrapPath;
-(CGImageRef)newLineEndImageOnRight:(BOOL)arg1 forContentsScale:(double)arg2 withSize:(CGSize)arg3 ;
@end

