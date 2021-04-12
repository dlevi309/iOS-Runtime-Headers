/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSMutableDictionary;

@interface VCImageAttributeRules : NSObject {

	NSMutableDictionary* _imageAttributeRules;

}

@property (nonatomic,retain) NSMutableDictionary * imageAttributeRules;              //@synthesize imageAttributeRules=_imageAttributeRules - In the implementation block
-(id)init;
-(id)description;
-(void)dealloc;
-(NSMutableDictionary *)imageAttributeRules;
-(id)extractDimensionsForInterface:(int)arg1 direction:(int)arg2 ;
-(void)setImageAttributeRules:(NSMutableDictionary *)arg1 ;
-(void)swapSendAndReceiveRules;
-(void)addRuleForVideoPayload:(int)arg1 withDirection:(int)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 priority:(int)arg6 interface:(int)arg7 ;
-(void)interfaceKey:(id*)arg1 forInterface:(int)arg2 directionKey:(id*)arg3 forDirection:(int)arg4 ;
@end

