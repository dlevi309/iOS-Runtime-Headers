/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)appendData:(id)arg1 ;
-(void)done;
-(id)initWithAppendHandler:(/*^block*/id)arg1 doneHandler:(/*^block*/id)arg2 ;
@end

