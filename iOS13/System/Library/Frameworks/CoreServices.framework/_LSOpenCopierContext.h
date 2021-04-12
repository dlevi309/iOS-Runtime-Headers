/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@class NSURL, NSError;

@interface _LSOpenCopierContext : NSObject {

	int _callbackType;
	NSURL* _destURL;
	NSError* _error;

}

@property (assign,nonatomic) int callbackType;              //@synthesize callbackType=_callbackType - In the implementation block
@property (nonatomic,retain) NSURL * destURL;               //@synthesize destURL=_destURL - In the implementation block
@property (nonatomic,retain) NSError * error;               //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(int)callbackType;
-(void)setCallbackType:(int)arg1 ;
-(NSURL *)destURL;
-(void)setDestURL:(NSURL *)arg1 ;
@end

