/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSMutableDictionary;

@interface VCImageAttributeRules : NSObject {

	NSMutableDictionary* _imageAttributeRules;

}

@property (nonatomic,retain) NSMutableDictionary * imageAttributeRules;              //@synthesize imageAttributeRules=_imageAttributeRules - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(NSMutableDictionary *)imageAttributeRules;
-(id)extractDimensionsForInterface:(int)arg1 direction:(int)arg2 ;
-(void)setImageAttributeRules:(NSMutableDictionary *)arg1 ;
-(void)swapSendAndReceiveRules;
-(void)addRuleForVideoPayload:(int)arg1 withDirection:(int)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 priority:(int)arg6 interface:(int)arg7 ;
-(void)interfaceKey:(id*)arg1 forInterface:(int)arg2 directionKey:(id*)arg3 forDirection:(int)arg4 ;
@end

