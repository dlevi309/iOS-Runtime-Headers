/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNResult.h>

@class SNFileServerInfo, NSString;

@interface SNFileServerDiscoveryResult : NSObject <SNResult> {

	SNFileServerInfo* _serverInfo;
	unsigned long long _state;

}

@property (nonatomic,retain) SNFileServerInfo * serverInfo;              //@synthesize serverInfo=_serverInfo - In the implementation block
@property (assign,nonatomic) unsigned long long state;                   //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SNFileServerInfo *)serverInfo;
-(void)setServerInfo:(SNFileServerInfo *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(id)initWithServerInfo:(id)arg1 state:(unsigned long long)arg2 ;
@end

