/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


#import <MetalTools/MetalTools-Structs.h>
@class NSString;

@interface MTLDebugBufferMarker : NSObject {

	NSString* _label;
	NSRange _range;

}

@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) NSRange range;               //@synthesize range=_range - In the implementation block
-(void)setRange:(NSRange)arg1 ;
-(NSRange)range;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)dealloc;
@end

