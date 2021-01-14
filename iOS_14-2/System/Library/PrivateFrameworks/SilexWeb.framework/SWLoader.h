/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

