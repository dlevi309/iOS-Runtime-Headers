/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitLayoutElementaryStackDigitRow.h>
#import <libobjc.A.dylib/EQKitLayoutElementaryStackRow.h>

@class NSString;

@interface EQKitLayoutElementaryStackCarryRow : EQKitLayoutElementaryStackDigitRow <EQKitLayoutElementaryStackRow> {

	vector<EQKitTypes::Crossout::Enum, std::__1::allocator<EQKitTypes::Crossout::Enum> >* mCrossouts;

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
-(void)populateMaxColumnWidths:(_wrap_iter<double *>*)arg1 ;
-(id)initWithChildren:(id)arg1 decimalPoint:(unsigned long long)arg2 position:(long long)arg3 followingSpace:(double)arg4 crossouts:(const vector<EQKitTypes::Crossout::Enum, std::__1::allocator<EQKitTypes::Crossout::Enum> >*)arg5 ;
-(int)crossoutAtColumnIndex:(unsigned long long)arg1 ;
@end

