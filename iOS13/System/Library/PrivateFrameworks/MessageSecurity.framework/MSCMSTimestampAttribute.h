/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
*/

#import <libobjc.A.dylib/MSCMSAttributeCoder.h>

@class NSURL, MSCMSSignerInfo, NSArray, MSOID, NSDate;

@interface MSCMSTimestampAttribute : NSObject <MSCMSAttributeCoder> {

	BOOL _certChainRequested;
	NSURL* _serverURL;
	MSCMSSignerInfo* _singerInfo;
	NSArray* _certificates;
	MSOID* _digestAlgorithm;
	NSDate* _timestampTime;

}

@property (retain) NSURL * serverURL;                           //@synthesize serverURL=_serverURL - In the implementation block
@property (assign) BOOL certChainRequested;                     //@synthesize certChainRequested=_certChainRequested - In the implementation block
@property (readonly) MSCMSSignerInfo * singerInfo;              //@synthesize singerInfo=_singerInfo - In the implementation block
@property (readonly) NSArray * certificates;                    //@synthesize certificates=_certificates - In the implementation block
@property (readonly) MSOID * digestAlgorithm;                   //@synthesize digestAlgorithm=_digestAlgorithm - In the implementation block
@property (readonly) NSDate * timestampTime;                    //@synthesize timestampTime=_timestampTime - In the implementation block
-(NSArray *)certificates;
-(NSURL *)serverURL;
-(void)setServerURL:(NSURL *)arg1 ;
-(id)initWithServerURL:(id)arg1 ;
-(MSOID *)digestAlgorithm;
-(BOOL)verifyTimestamps:(id*)arg1 ;
-(id)encodeAttributeWithError:(id*)arg1 ;
-(id)initWithAttribute:(id)arg1 error:(id*)arg2 ;
-(id)initWithServerURL:(id)arg1 chainRequested:(BOOL)arg2 ;
-(id)initWithTimestampToken:(id)arg1 ;
-(BOOL)certChainRequested;
-(void)setCertChainRequested:(BOOL)arg1 ;
-(MSCMSSignerInfo *)singerInfo;
-(NSDate *)timestampTime;
@end

