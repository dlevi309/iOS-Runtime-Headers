/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSRange)range;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setRange:(NSRange)arg1 ;
@end

