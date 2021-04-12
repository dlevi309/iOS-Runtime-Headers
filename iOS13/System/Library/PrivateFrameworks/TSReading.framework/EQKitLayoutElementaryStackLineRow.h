/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/EQKitLayoutElementaryStackRow.h>

@class NSString;

@interface EQKitLayoutElementaryStackLineRow : NSObject <EQKitLayoutElementaryStackRow> {

	unsigned long long mLength;
	double mThickness;
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
-(unsigned long long)columnCount;
-(long long)alignmentShift;
-(void)setFirstColumnIndex:(unsigned long long)arg1 ;
-(unsigned long long)firstColumnIndex;
-(void)populateMaxColumnWidths:(_wrap_iter<double *>*)arg1 ;
-(double)followingSpace;
-(id)initWithLength:(unsigned long long)arg1 thickness:(double)arg2 position:(long long)arg3 followingSpace:(double)arg4 ;
-(BOOL)spansStack;
-(id)newBoxWithStackWidth:(double)arg1 columnWidthIter:(_wrap_iter<double *>*)arg2 iterMax:(_wrap_iter<double *>*)arg3 previousRow:(id)arg4 layoutManager:(const EQKitLayoutManager*)arg5 ;
@end

