/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)main;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(BOOL)ignore;
-(id)initWithMessageString:(id)arg1 type:(long long)arg2 ;
-(void)setIgnore:(BOOL)arg1 ;
@end

