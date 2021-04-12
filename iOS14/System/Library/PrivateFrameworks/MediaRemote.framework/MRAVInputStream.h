/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVBufferedInputStream.h>
#import <libobjc.A.dylib/AVOutputContextCommunicationChannelDelegate.h>

@class AVOutputContext, NSString;

@interface MRAVInputStream : MRAVBufferedInputStream <AVOutputContextCommunicationChannelDelegate> {

	AVOutputContext* _outputContext;

}

@property (nonatomic,readonly) AVOutputContext * outputContext;              //@synthesize outputContext=_outputContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(void)outputContext:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3 ;
-(void)outputContext:(id)arg1 didCloseCommunicationChannel:(id)arg2 ;
-(id)initWithOutputContext:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)description;
-(AVOutputContext *)outputContext;
-(void)dealloc;
@end

