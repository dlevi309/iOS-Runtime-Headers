/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@interface SBFLazyObjectProvider : NSObject {

	id _object;
	/*^block*/id _generator;

}

@property (nonatomic,retain) id object;               //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) id generator;              //@synthesize generator=_generator - In the implementation block
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)generator;
-(void)setGenerator:(id)arg1 ;
-(id)initWithGenerator:(/*^block*/id)arg1 ;
@end

