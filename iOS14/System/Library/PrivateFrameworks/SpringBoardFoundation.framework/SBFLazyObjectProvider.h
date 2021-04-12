/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@interface SBFLazyObjectProvider : NSObject {

	id _object;
	/*^block*/id _generator;

}

@property (nonatomic,retain) id object;               //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) id generator;              //@synthesize generator=_generator - In the implementation block
-(id)initWithGenerator:(/*^block*/id)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)setGenerator:(id)arg1 ;
-(id)generator;
@end

