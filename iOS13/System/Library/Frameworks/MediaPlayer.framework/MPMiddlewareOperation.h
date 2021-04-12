/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class NSError, NSArray;


@protocol MPMiddlewareOperation <NSObject>
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler; 
@property (nonatomic,readonly) NSArray * invalidationObservers; 
@optional
-(id)timeoutDescription;

@required
-(NSError *)error;
-(void)setInvalidationHandler:(/*^block*/id)arg1;
-(id)invalidationHandler;
-(NSArray *)invalidationObservers;

@end

