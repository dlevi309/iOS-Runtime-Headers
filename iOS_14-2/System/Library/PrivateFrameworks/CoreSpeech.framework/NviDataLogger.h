/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSOutputStream, NSString;

@interface NviDataLogger : NSObject <NSStreamDelegate> {

	NSOutputStream* _oStream;

}

@property (nonatomic,retain) NSOutputStream * oStream;              //@synthesize oStream=_oStream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSOutputStream *)oStream;
-(void)logData:(id)arg1 ;
-(void)endRequest;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(id)initWithFilePath:(id)arg1 appendHdr:(id)arg2 ;
-(void)setOStream:(NSOutputStream *)arg1 ;
@end

