/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)succeeded;
-(void)setStore:(MFDAMessageStore *)arg1 ;
-(MFDAMessageStore *)store;
-(void)setError:(MFError *)arg1 ;
-(MFError *)error;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
-(BOOL)wantsData;
@end

