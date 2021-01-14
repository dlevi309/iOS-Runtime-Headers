/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface AVAudioDeviceTestProcessingChain : NSObject <NSSecureCoding> {

	NSURL* _graphURL;
	NSURL* _processingStripURL;

}

@property (nonatomic,retain) NSURL * graphURL;                        //@synthesize graphURL=_graphURL - In the implementation block
@property (nonatomic,retain) NSURL * processingStripURL;              //@synthesize processingStripURL=_processingStripURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setGraphURL:(NSURL *)arg1 ;
-(NSURL *)processingStripURL;
-(void)setProcessingStripURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)graphURL;
-(id)initWithCoder:(id)arg1 ;
@end

