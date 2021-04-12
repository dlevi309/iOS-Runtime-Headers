/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/


@interface SWLoader : NSObject {

	/*^block*/id _loadBlock;

}

@property (nonatomic,readonly) id loadBlock;              //@synthesize loadBlock=_loadBlock - In the implementation block
+(id)loaderWithBlock:(/*^block*/id)arg1 ;
-(void)load;
-(id)loadBlock;
@end

