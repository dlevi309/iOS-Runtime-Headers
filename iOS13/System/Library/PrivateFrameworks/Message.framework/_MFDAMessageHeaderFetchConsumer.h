/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/MFDASyncResponseConsumer.h>

@class MFError, NSData, MFDAMessageStore, NSString;

@interface _MFDAMessageHeaderFetchConsumer : NSObject <MFDASyncResponseConsumer> {

	BOOL _succeeded;
	MFError* _error;
	NSData* _data;
	MFDAMessageStore* _store;

}

@property (nonatomic,readonly) BOOL succeeded;                      //@synthesize succeeded=_succeeded - In the implementation block
@property (nonatomic,retain) MFError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) MFDAMessageStore * store;              //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)data;
-(MFError *)error;
-(void)setData:(NSData *)arg1 ;
-(void)setError:(MFError *)arg1 ;
-(MFDAMessageStore *)store;
-(void)setStore:(MFDAMessageStore *)arg1 ;
-(BOOL)succeeded;
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
-(BOOL)wantsData;
@end

