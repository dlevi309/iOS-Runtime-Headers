/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVStreamDataParserOutputHandling.h>

@class AVStreamDataParser, NSString;

@interface WebAVStreamDataParserListener : NSObject <AVStreamDataParserOutputHandling> {

	SourceBufferParserAVFObjC* _parent;
	AVStreamDataParser* _parser;

}

@property (assign) SourceBufferParserAVFObjC* parent;               //@synthesize parent=_parent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SourceBufferParserAVFObjC*)parent;
-(void)setParent:(SourceBufferParserAVFObjC*)arg1 ;
-(void)streamDataParser:(id)arg1 didFailToParseStreamDataWithError:(id)arg2 ;
-(void)streamDataParser:(id)arg1 didParseStreamDataAsAsset:(id)arg2 withDiscontinuity:(BOOL)arg3 ;
-(void)streamDataParser:(id)arg1 didProvideMediaData:(opaqueCMSampleBufferRef)arg2 forTrackID:(int)arg3 mediaType:(id)arg4 flags:(unsigned long long)arg5 ;
-(void)streamDataParserWillProvideContentKeyRequestInitializationData:(id)arg1 forTrackID:(int)arg2 ;
-(void)streamDataParser:(id)arg1 didProvideContentKeyRequestInitializationData:(id)arg2 forTrackID:(int)arg3 ;
-(void)invalidate;
-(id)initWithParser:(id)arg1 parent:(SourceBufferParserAVFObjC*)arg2 ;
-(void)streamDataParser:(id)arg1 didParseStreamDataAsAsset:(id)arg2 ;
-(void)dealloc;
@end

