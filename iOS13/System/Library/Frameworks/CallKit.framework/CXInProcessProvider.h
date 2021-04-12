/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CXProvider.h>

@class CXInProcessCallSource, NSString;

@interface CXInProcessProvider : CXProvider {

	CXInProcessCallSource* _callSource;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) CXInProcessCallSource * callSource;              //@synthesize callSource=_callSource - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id)hostProtocolDelegate;
-(CXInProcessCallSource *)callSource;
-(id)initWithIdentifier:(id)arg1 callSource:(id)arg2 configuration:(id)arg3 ;
-(void)setCallSource:(CXInProcessCallSource *)arg1 ;
@end

