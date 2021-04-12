/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTImageEncoder.h>

@class NSString;

@interface AVTHEIFImageEncoder : NSObject <AVTImageEncoder> {

	BOOL _useHEICSSequence;

}

@property (nonatomic,readonly) BOOL useHEICSSequence;               //@synthesize useHEICSSequence=_useHEICSSequence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)HEICSSequenceEncoder;
+(id)defaultHEICEncoder;
-(id)fileExtension;
-(id)initUsingHeicsSequence:(BOOL)arg1 ;
-(id)imageFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)useHEICSSequence;
-(id)imageFromURL:(id)arg1 error:(id*)arg2 ;
-(id)dataFromImage:(id)arg1 ;
@end

