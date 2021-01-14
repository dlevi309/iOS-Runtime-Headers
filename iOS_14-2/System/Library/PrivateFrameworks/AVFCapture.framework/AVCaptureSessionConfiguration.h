/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
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
-(id)uniqueOutputs:(id)arg1 ;
-(id)uniqueInputs:(id)arg1 ;
-(NSArray *)connections;
-(long long)configurationID;
-(id)uniqueConnections:(id)arg1 ;
-(id)uniqueVideoPreviewLayers:(id)arg1 ;
-(id)initWithConfigurationID:(long long)arg1 inputs:(id)arg2 outputs:(id)arg3 videoPreviewLayers:(id)arg4 connections:(id)arg5 ;
-(NSArray *)inputs;
-(NSHashTable *)videoPreviewLayers;
-(NSArray *)outputs;
-(void)dealloc;
@end

