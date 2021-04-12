/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)done;
-(id)data;
-(long long)appendData:(id)arg1 ;
@end

