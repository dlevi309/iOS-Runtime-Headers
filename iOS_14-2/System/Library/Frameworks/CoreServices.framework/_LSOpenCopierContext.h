/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)destURL;
-(void)setDestURL:(NSURL *)arg1 ;
-(int)callbackType;
-(void)setCallbackType:(int)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
@end

