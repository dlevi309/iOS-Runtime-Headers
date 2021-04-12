/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class NSValue;

@interface SUScrollRequest : NSObject {

	BOOL _animated;
	/*^block*/id _completionHandler;
	NSValue* _contentOffsetValue;
	NSValue* _frameValue;

}

@property (assign,getter=isAnimated,nonatomic) BOOL animated;              //@synthesize animated=_animated - In the implementation block
@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (retain) NSValue * contentOffsetValue;                           //@synthesize contentOffsetValue=_contentOffsetValue - In the implementation block
@property (retain) NSValue * frameValue;                                   //@synthesize frameValue=_frameValue - In the implementation block
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)isAnimated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setFrameValue:(NSValue *)arg1 ;
-(void)setContentOffsetValue:(NSValue *)arg1 ;
-(NSValue *)contentOffsetValue;
-(NSValue *)frameValue;
@end

