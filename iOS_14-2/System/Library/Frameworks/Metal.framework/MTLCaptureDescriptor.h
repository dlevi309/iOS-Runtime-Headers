/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDestination:(long long)arg1 ;
-(id)init;
-(NSURL *)outputURL;
-(void)setCaptureObject:(id)arg1 ;
-(unsigned long long)hash;
-(void)setOutputURL:(NSURL *)arg1 ;
-(id)captureObject;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)destination;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

