/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <libobjc.A.dylib/MFGuaranteedCollectingDataConsumer.h>

@class MFDataHolder, NSString;

@interface MFZeroCopyDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer> {

	MFDataHolder* _dataHolder;
	BOOL _done;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)data;
-(long long)appendData:(id)arg1 ;
-(void)done;
@end

