/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAnimated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)dealloc;
-(void)setFrameValue:(NSValue *)arg1 ;
-(void)setContentOffsetValue:(NSValue *)arg1 ;
-(NSValue *)contentOffsetValue;
-(NSValue *)frameValue;
@end

