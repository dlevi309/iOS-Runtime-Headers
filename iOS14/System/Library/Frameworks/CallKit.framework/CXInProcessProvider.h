/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCallSource:(CXInProcessCallSource *)arg1 ;
-(CXInProcessCallSource *)callSource;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 callSource:(id)arg2 configuration:(id)arg3 ;
-(id)hostProtocolDelegate;
@end

