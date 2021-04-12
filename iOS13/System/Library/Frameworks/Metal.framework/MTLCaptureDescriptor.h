/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface MTLCaptureDescriptor : NSObject <NSCopying> {

	id _captureObject;
	long long _destination;
	NSURL* _outputURL;

}

@property (nonatomic,retain) id captureObject;                   //@synthesize captureObject=_captureObject - In the implementation block
@property (assign,nonatomic) long long destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,copy) NSURL * outputURL;                    //@synthesize outputURL=_outputURL - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)destination;
-(void)setDestination:(long long)arg1 ;
-(NSURL *)outputURL;
-(void)setOutputURL:(NSURL *)arg1 ;
-(void)setCaptureObject:(id)arg1 ;
-(id)captureObject;
@end

