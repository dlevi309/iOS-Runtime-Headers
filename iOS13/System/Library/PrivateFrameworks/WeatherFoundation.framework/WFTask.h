/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@class WFTaskIdentifier, NSProgress;

@interface WFTask : NSObject {

	BOOL _requiresResponse;
	WFTaskIdentifier* _identifier;
	NSProgress* _progress;

}

@property (nonatomic,readonly) WFTaskIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL requiresResponse;                      //@synthesize requiresResponse=_requiresResponse - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                        //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled; 
+(id)sharedServiceConnection;
-(id)init;
-(WFTaskIdentifier *)identifier;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(NSProgress *)progress;
-(void)cleanup;
-(void)setProgress:(NSProgress *)arg1 ;
-(BOOL)requiresResponse;
-(void)executeSynchronously;
-(id)initWithResponseRequired:(BOOL)arg1 ;
-(void)handleResponse:(id)arg1 ;
-(void)startWithService:(id)arg1 ;
-(void)handleCancellation;
@end

