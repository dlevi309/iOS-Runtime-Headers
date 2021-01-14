/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <libobjc.A.dylib/ICSInputByteStream.h>

@protocol ICSInputByteStream;
@class NSString;

@interface ICSPushbackStream : NSObject <ICSInputByteStream> {

	id<ICSInputByteStream> _underStream;
	char* _pbData;
	int _pbCursor;
	BOOL _readPastEOS;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)eos;
-(char)read;
-(char)peek;
-(id)initWithInputStream:(id)arg1 ;
-(BOOL)pushBack:(char)arg1 ;
-(void)dealloc;
@end

