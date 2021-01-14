/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
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
-(NSArray *)invalidationObservers;
-(void)setInvalidationHandler:(/*^block*/id)arg1;
-(id)invalidationHandler;

@end

