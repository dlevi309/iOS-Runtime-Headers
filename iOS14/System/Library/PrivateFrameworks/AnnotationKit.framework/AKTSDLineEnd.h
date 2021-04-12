/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AKTSDLineEnd : NSObject <NSCopying> {

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
+(id)none;
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
+(id)lineEndWithType:(int)arg1 ;
-(CGPoint)endPoint;
-(BOOL)isFilled;
-(CGPathRef)path;
-(BOOL)isNone;
-(int)lineJoin;
-(id)description;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithPath:(CGPathRef)arg1 wrapPath:(CGPathRef)arg2 endPoint:(CGPoint)arg3 isFilled:(BOOL)arg4 identifier:(id)arg5 lineJoin:(int)arg6 ;
-(id)initWithPath:(CGPathRef)arg1 endPoint:(CGPoint)arg2 isFilled:(BOOL)arg3 identifier:(id)arg4 ;
-(CGPathRef)wrapPath;
@end

