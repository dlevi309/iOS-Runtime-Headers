/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISEffect.h>

@class NSString;

@interface ISEmbossedEffect : NSObject <ISEffect> {

	double _range;
	CGSize _offset;

}

@property (assign) CGSize offset;                                   //@synthesize offset=_offset - In the implementation block
@property (assign) double range;                                    //@synthesize range=_range - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)range;
-(void)setOffset:(CGSize)arg1 ;
-(CGSize)offset;
-(void)setRange:(double)arg1 ;
-(id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2 ;
@end

