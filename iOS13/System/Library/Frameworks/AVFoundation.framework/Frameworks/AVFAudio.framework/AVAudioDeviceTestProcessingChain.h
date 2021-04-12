/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)graphURL;
-(void)setGraphURL:(NSURL *)arg1 ;
-(NSURL *)processingStripURL;
-(void)setProcessingStripURL:(NSURL *)arg1 ;
@end

