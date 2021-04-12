/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@class NUScript;

@interface NURenderPipelineFilter : NSObject {

	NUScript* _script;
	/*^block*/id _filterBlock;

}

@property (nonatomic,readonly) NUScript * script;              //@synthesize script=_script - In the implementation block
@property (nonatomic,readonly) id filterBlock;                 //@synthesize filterBlock=_filterBlock - In the implementation block
+(id)stopAtTagFilter:(id)arg1 ;
-(NUScript *)script;
-(id)init;
-(id)description;
-(id)filterBlock;
-(id)initWithScript:(id)arg1 ;
-(id)initWithScript:(id)arg1 block:(/*^block*/id)arg2 ;
@end

