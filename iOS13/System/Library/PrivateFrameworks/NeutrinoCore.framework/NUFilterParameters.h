/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@class NSDictionary;

@interface NUFilterParameters : NSObject {

	NSDictionary* _inputNodes;
	NSDictionary* _settings;

}

@property (copy) NSDictionary * inputNodes;              //@synthesize inputNodes=_inputNodes - In the implementation block
@property (copy) NSDictionary * settings;                //@synthesize settings=_settings - In the implementation block
-(id)init;
-(id)description;
-(NSDictionary *)settings;
-(void)setSettings:(NSDictionary *)arg1 ;
-(NSDictionary *)inputNodes;
-(void)setInputNodes:(NSDictionary *)arg1 ;
@end

