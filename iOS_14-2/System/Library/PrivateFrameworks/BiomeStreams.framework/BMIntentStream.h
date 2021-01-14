/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <libobjc.A.dylib/BMSourceStream.h>
#import <libobjc.A.dylib/BMStream.h>

@class BMStoreStream, NSString;

@interface BMIntentStream : NSObject <BMSourceStream, BMStream> {

	BMStoreStream* _storeStream;

}

@property (nonatomic,readonly) NSString * identifier; 
-(id)init;
-(id)publisherFromStartTime:(double)arg1 ;
-(NSString *)identifier;
-(id)source;
@end

