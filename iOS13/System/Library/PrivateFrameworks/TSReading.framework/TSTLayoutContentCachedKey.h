/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TSWPParagraphStyle;

@interface TSTLayoutContentCachedKey : NSObject <NSCopying> {

	NSString* mString;
	double mWidth;
	double mHeight;
	TSWPParagraphStyle* mParagraphStyle;
	BOOL mCellWraps;
	int mValueType;
	UIEdgeInsets mPaddingInsets;
	unsigned mVerticalAlignment;
	int mWritingDirection;

}

@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) TSWPParagraphStyle * paragraphStyle; 
@property (nonatomic,readonly) BOOL cellWraps; 
@property (nonatomic,readonly) int valueType; 
@property (nonatomic,readonly) UIEdgeInsets paddingInsets; 
@property (nonatomic,readonly) unsigned verticalAlignment; 
@property (nonatomic,readonly) int writingDirection; 
-(NSString *)string;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(double)height;
-(int)valueType;
-(unsigned)verticalAlignment;
-(int)writingDirection;
-(TSWPParagraphStyle *)paragraphStyle;
-(BOOL)cellWraps;
-(UIEdgeInsets)paddingInsets;
-(id)initWithString:(id)arg1 width:(double)arg2 height:(double)arg3 paragraphStyle:(id)arg4 cellWraps:(BOOL)arg5 valueType:(int)arg6 paddingInsets:(UIEdgeInsets)arg7 verticalAlignment:(unsigned)arg8 writingDirection:(int)arg9 ;
-(BOOL)isEqualToLayoutContentCachedKey:(id)arg1 ;
@end

