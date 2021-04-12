/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <libobjc.A.dylib/MFDataConsumer.h>

@protocol MFGuaranteedCollectingDataConsumer;
@class NSData, NSString;

@interface MFPartialNetworkDataConsumer : NSObject <MFDataConsumer> {

	id<MFGuaranteedCollectingDataConsumer> _rawDataConsumer;
	NSData* _strippedData;
	unsigned long long _length;
	unsigned _seenNetworkLineEndings : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(id)data;
-(long long)appendData:(id)arg1 ;
-(void)purge;
-(void)done;
-(id)copyDataWithUnixLineEndings;
@end

