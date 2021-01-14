/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <Foundation/NSOperation.h>

@class NSString;

@interface CACMessageDisplayOperation : NSOperation {

	BOOL _ignore;
	NSString* _message;
	long long _type;

}

@property (assign) BOOL ignore;                     //@synthesize ignore=_ignore - In the implementation block
@property (retain) NSString * message;              //@synthesize message=_message - In the implementation block
@property (assign) long long type;                  //@synthesize type=_type - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(BOOL)ignore;
-(void)setType:(long long)arg1 ;
-(void)main;
-(long long)type;
-(id)initWithMessageString:(id)arg1 type:(long long)arg2 ;
-(void)setIgnore:(BOOL)arg1 ;
@end

