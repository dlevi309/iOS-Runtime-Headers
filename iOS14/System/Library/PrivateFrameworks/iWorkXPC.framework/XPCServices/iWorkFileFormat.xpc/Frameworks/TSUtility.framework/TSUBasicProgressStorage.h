/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


@interface TSUBasicProgressStorage : NSObject {

	double mValue;
	double mMaxValue;
	BOOL mIndeterminate;

}

@property (assign) double value; 
@property (assign) double maxValue; 
@property (getter=isIndeterminate) BOOL indeterminate; 
-(void)setMaxValue:(double)arg1 ;
-(void)setIndeterminate:(BOOL)arg1 ;
-(void)setValue:(double)arg1 ;
-(BOOL)isIndeterminate;
-(double)maxValue;
-(double)value;
@end

