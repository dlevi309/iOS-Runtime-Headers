/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSError.h>
@class NSString;


@protocol VSJSError <JSExport>
@property (assign,nonatomic) unsigned long long code; 
@property (nonatomic,copy) NSString * message; 
@required
-(id)init;
-(unsigned long long)code;
-(NSString *)message;
-(void)setMessage:(id)arg1;
-(void)setCode:(unsigned long long)arg1;

@end


@class NSString;

@interface VSJSError : IKJSObject <VSJSError> {

	unsigned long long _code;
	NSString* _message;

}

@property (assign,nonatomic) unsigned long long code;              //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSString * message;                     //@synthesize message=_message - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)code;
-(id)error;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setCode:(unsigned long long)arg1 ;
@end

