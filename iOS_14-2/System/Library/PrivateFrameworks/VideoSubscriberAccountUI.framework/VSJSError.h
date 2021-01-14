/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSError.h>
@class NSString;


@protocol VSJSError <JSExport>
@property (assign,nonatomic) unsigned long long code; 
@property (nonatomic,copy) NSString * message; 
@required
-(void)setMessage:(id)arg1;
-(NSString *)message;
-(id)init;
-(void)setCode:(unsigned long long)arg1;
-(unsigned long long)code;

@end


@class NSString;

@interface VSJSError : IKJSObject <VSJSError> {

	unsigned long long _code;
	NSString* _message;

}

@property (assign,nonatomic) unsigned long long code;              //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSString * message;                     //@synthesize message=_message - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(id)init;
-(id)error;
-(void)setCode:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)code;
@end

