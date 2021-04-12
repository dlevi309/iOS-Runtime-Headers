/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class NSArray, NSHashTable;

@interface AVCaptureSessionConfiguration : NSObject {

	long long _configurationID;
	NSArray* _inputs;
	NSArray* _outputs;
	NSHashTable* _videoPreviewLayers;
	NSArray* _connections;

}

@property (readonly) long long configurationID;                     //@synthesize configurationID=_configurationID - In the implementation block
@property (readonly) NSArray * inputs;                              //@synthesize inputs=_inputs - In the implementation block
@property (readonly) NSArray * outputs;                             //@synthesize outputs=_outputs - In the implementation block
@property (readonly) NSHashTable * videoPreviewLayers;              //@synthesize videoPreviewLayers=_videoPreviewLayers - In the implementation block
@property (readonly) NSArray * connections;                         //@synthesize connections=_connections - In the implementation block
-(void)dealloc;
-(NSArray *)inputs;
-(NSArray *)outputs;
-(NSArray *)connections;
-(NSHashTable *)videoPreviewLayers;
-(id)initWithConfigurationID:(long long)arg1 inputs:(id)arg2 outputs:(id)arg3 videoPreviewLayers:(id)arg4 connections:(id)arg5 ;
-(id)uniqueInputs:(id)arg1 ;
-(id)uniqueOutputs:(id)arg1 ;
-(id)uniqueConnections:(id)arg1 ;
-(id)uniqueVideoPreviewLayers:(id)arg1 ;
-(long long)configurationID;
@end

