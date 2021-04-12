/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/EQKitLayoutElementaryStackRow.h>

@class NSArray, NSString;

@interface EQKitLayoutElementaryStackDigitRow : NSObject <EQKitLayoutElementaryStackRow> {

	NSArray* mColumnBoxes;
	long long mAlignmentShift;
	unsigned long long mFirstColumnIndex;
	double mFollowingSpace;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long alignmentShift; 
@property (assign,nonatomic) unsigned long long firstColumnIndex; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) BOOL spansStack; 
@property (nonatomic,readonly) double followingSpace; 
-(void)dealloc;
-(unsigned long long)columnCount;
-(long long)alignmentShift;
-(void)setFirstColumnIndex:(unsigned long long)arg1 ;
-(unsigned long long)firstColumnIndex;
-(void)populateMaxColumnWidths:(_wrap_iter<double *>*)arg1 ;
-(double)followingSpace;
-(id)initWithChildren:(id)arg1 decimalPoint:(unsigned long long)arg2 position:(long long)arg3 followingSpace:(double)arg4 ;
-(BOOL)spansStack;
-(id)newBoxWithStackWidth:(double)arg1 columnWidthIter:(_wrap_iter<double *>*)arg2 iterMax:(_wrap_iter<double *>*)arg3 previousRow:(id)arg4 layoutManager:(const EQKitLayoutManager*)arg5 ;
-(id)p_crossoutDigitBox:(id)arg1 crossout:(int)arg2 layoutManager:(const EQKitLayoutManager*)arg3 ;
@end

