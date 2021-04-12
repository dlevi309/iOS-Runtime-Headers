/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRange:(double)arg1 ;
-(double)range;
-(CGSize)offset;
-(id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2 ;
-(void)setOffset:(CGSize)arg1 ;
@end

