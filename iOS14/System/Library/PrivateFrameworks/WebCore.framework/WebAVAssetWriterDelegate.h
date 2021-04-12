/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVAssetWriterDelegate.h>

@class NSString;

@interface WebAVAssetWriterDelegate : NSObject <AVAssetWriterDelegate> {

	WeakPtr<WebCore::MediaRecorderPrivateWriter, WTF::EmptyCounter>* m_writer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)assetWriter:(id)arg1 didProduceFragmentedHeaderData:(id)arg2 ;
-(void)assetWriter:(id)arg1 didProduceFragmentedMediaData:(id)arg2 fragmentedMediaDataReport:(id)arg3 ;
-(id)initWithWriter:(MediaRecorderPrivateWriter*)arg1 ;
-(void)close;
@end

