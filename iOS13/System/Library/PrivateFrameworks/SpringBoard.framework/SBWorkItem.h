/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSDate;

@interface SBWorkItem : NSObject {

	/*^block*/id _workBlock;
	NSDate* _creationDate;

}

@property (nonatomic,readonly) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) id work;                       //@synthesize workBlock=_workBlock - In the implementation block
-(NSDate *)creationDate;
-(id)work;
-(id)initWithWork:(/*^block*/id)arg1 ;
@end

