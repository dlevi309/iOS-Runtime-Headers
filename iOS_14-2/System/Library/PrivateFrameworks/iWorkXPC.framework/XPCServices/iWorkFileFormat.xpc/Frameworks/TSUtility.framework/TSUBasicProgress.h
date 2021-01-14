/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUProgress.h>

@class TSUBasicProgressStorage;

@interface TSUBasicProgress : TSUProgress {

	TSUBasicProgressStorage* mStorage;

}

@property (assign) double value; 
@property (getter=isIndeterminate) BOOL indeterminate; 
-(id)init;
-(void)setIndeterminate:(BOOL)arg1 ;
-(void)setValue:(double)arg1 ;
-(BOOL)isIndeterminate;
-(double)maxValue;
-(double)value;
-(void)dealloc;
-(id)initWithMaxValue:(double)arg1 ;
@end

