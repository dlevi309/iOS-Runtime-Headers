/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSettings:(NSDictionary *)arg1 ;
-(id)description;
-(NSDictionary *)settings;
-(NSDictionary *)inputNodes;
-(void)setInputNodes:(NSDictionary *)arg1 ;
@end

