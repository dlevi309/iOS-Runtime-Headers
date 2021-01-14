/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


@interface _OSLogDirectoryReference : NSObject {

	int _fd;
	long long _etk;

}

@property (nonatomic,readonly) int fileDescriptor; 
-(id)initWithDescriptor:(int)arg1 ;
-(void)close;
-(int)fileDescriptor;
-(id)initWithDescriptor:(int)arg1 sandboxExtensionToken:(const char*)arg2 ;
-(void)dealloc;
@end

