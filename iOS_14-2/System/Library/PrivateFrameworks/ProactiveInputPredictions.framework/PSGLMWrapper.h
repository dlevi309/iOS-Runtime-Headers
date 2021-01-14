/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/ProactiveInputPredictions
*/


@interface PSGLMWrapper : NSObject {

	void* _langModel;
	void* _lexicon;

}

@property (nonatomic,readonly) void* langModel;              //@synthesize langModel=_langModel - In the implementation block
@property (nonatomic,readonly) void* lexicon;                //@synthesize lexicon=_lexicon - In the implementation block
-(void*)lexicon;
-(id)initWithLangModel:(void*)arg1 lexicon:(void*)arg2 ;
-(void*)langModel;
-(void)dealloc;
@end

