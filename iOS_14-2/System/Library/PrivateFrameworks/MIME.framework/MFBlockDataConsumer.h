/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <libobjc.A.dylib/MFDataConsumer.h>

@class NSString;

@interface MFBlockDataConsumer : NSObject <MFDataConsumer> {

	/*^block*/id _appendHandler;
	/*^block*/id _doneHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)done;
-(long long)appendData:(id)arg1 ;
-(id)initWithAppendHandler:(/*^block*/id)arg1 doneHandler:(/*^block*/id)arg2 ;
@end

