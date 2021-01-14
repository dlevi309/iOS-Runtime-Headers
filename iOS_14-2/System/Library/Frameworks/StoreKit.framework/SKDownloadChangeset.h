/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSURL, NSError;

@interface SKDownloadChangeset : NSObject <NSCopying> {

	NSNumber* _contentLength;
	NSURL* _contentURL;
	NSNumber* _downloadID;
	NSNumber* _downloadState;
	NSError* _error;
	NSNumber* _progress;
	NSNumber* _timeRemaining;

}

@property (nonatomic,copy) NSNumber * contentLength;              //@synthesize contentLength=_contentLength - In the implementation block
@property (nonatomic,copy) NSURL * contentURL;                    //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy) NSNumber * downloadID;                 //@synthesize downloadID=_downloadID - In the implementation block
@property (nonatomic,copy) NSNumber * downloadState;              //@synthesize downloadState=_downloadState - In the implementation block
@property (nonatomic,copy) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSNumber * progress;                   //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) NSNumber * timeRemaining;              //@synthesize timeRemaining=_timeRemaining - In the implementation block
+(id)changesetWithDownloadID:(id)arg1 state:(long long)arg2 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSNumber *)contentLength;
-(NSURL *)contentURL;
-(NSNumber *)downloadState;
-(NSNumber *)progress;
-(NSNumber *)downloadID;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setTimeRemaining:(NSNumber *)arg1 ;
-(NSNumber *)timeRemaining;
-(void)setContentLength:(NSNumber *)arg1 ;
-(void)setDownloadState:(NSNumber *)arg1 ;
-(void)setProgress:(NSNumber *)arg1 ;
-(void)setContentURL:(NSURL *)arg1 ;
-(void)setDownloadID:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

