/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/


@protocol FMAPSDelegate;
@class NSString;

@interface FMAPSDelegateInfo : NSObject {

	NSString* _topic;
	id<FMAPSDelegate> _delegate;

}

@property (nonatomic,retain) NSString * topic;                               //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic,__weak) id<FMAPSDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<FMAPSDelegate>)delegate;
-(void)setDelegate:(id<FMAPSDelegate>)arg1 ;
-(NSString *)topic;
-(void)setTopic:(NSString *)arg1 ;
@end

