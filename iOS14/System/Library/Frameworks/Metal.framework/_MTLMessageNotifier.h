/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@class MTLMessageFilter;

@interface _MTLMessageNotifier : NSObject {

	MTLMessageFilter* _filter;
	/*^block*/id _handler;

}

@property (retain,readonly) MTLMessageFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (readonly) id handler;                                    //@synthesize handler=_handler - In the implementation block
-(MTLMessageFilter *)filter;
-(id)init:(/*^block*/id)arg1 filter:(id)arg2 ;
-(id)handler;
-(void)dealloc;
@end

