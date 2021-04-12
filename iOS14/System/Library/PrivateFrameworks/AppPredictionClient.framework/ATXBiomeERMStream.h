/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/BMStream.h>
#import <libobjc.A.dylib/BMSourceStream.h>

@class BMStoreStream, NSString;

@interface ATXBiomeERMStream : NSObject <BMStream, BMSourceStream> {

	BMStoreStream* _inner;

}

@property (nonatomic,readonly) NSString * identifier; 
-(id)init;
-(id)publisherFromStartTime:(double)arg1 ;
-(id)initWithStoreConfig:(id)arg1 ;
-(NSString *)identifier;
-(id)source;
@end

