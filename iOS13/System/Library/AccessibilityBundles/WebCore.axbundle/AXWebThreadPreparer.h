/*
* Generated on Monday, March 1, 2021 at 2:35:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/WebCore.axbundle/WebCore
*/


@interface AXWebThreadPreparer : NSObject {

	BOOL _preparedThisRunLoop;
	BOOL _preparedAnswer;

}

@property (assign,nonatomic) BOOL preparedThisRunLoop;              //@synthesize preparedThisRunLoop=_preparedThisRunLoop - In the implementation block
@property (assign,nonatomic) BOOL preparedAnswer;                   //@synthesize preparedAnswer=_preparedAnswer - In the implementation block
+(id)sharedPreparer;
-(id)init;
-(BOOL)preparedThisRunLoop;
-(void)setPreparedThisRunLoop:(BOOL)arg1 ;
-(BOOL)preparedAnswer;
-(void)setPreparedAnswer:(BOOL)arg1 ;
@end

