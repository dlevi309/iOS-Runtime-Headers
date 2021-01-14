/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSDate;

@interface SBWorkItem : NSObject {

	/*^block*/id _workBlock;
	NSDate* _creationDate;

}

@property (nonatomic,readonly) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) id work;                       //@synthesize workBlock=_workBlock - In the implementation block
-(id)work;
-(NSDate *)creationDate;
-(id)initWithWork:(/*^block*/id)arg1 ;
@end

