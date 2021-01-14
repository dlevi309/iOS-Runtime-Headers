/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)length;
-(void)done;
-(id)data;
-(long long)appendData:(id)arg1 ;
-(void)purge;
-(void)dealloc;
-(id)copyDataWithUnixLineEndings;
@end

