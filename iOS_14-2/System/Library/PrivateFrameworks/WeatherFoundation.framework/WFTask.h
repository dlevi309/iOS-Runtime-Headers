/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)handleResponse:(id)arg1 ;
-(void)startWithService:(id)arg1 ;
-(void)handleCancellation;
-(NSProgress *)progress;
-(id)init;
-(void)start;
-(BOOL)requiresResponse;
-(void)cleanup;
-(void)setProgress:(NSProgress *)arg1 ;
-(id)initWithResponseRequired:(BOOL)arg1 ;
-(void)executeSynchronously;
-(WFTaskIdentifier *)identifier;
-(void)cancel;
-(BOOL)isCancelled;
@end

