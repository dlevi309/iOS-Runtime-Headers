/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSString, NSDictionary;

@interface IKPlayerRequestSeekToTimeEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	BOOL _shouldSeek;
	double _requestedTime;
	double _currentTime;
	double _proposedTime;

}

@property (nonatomic,readonly) double requestedTime;                   //@synthesize requestedTime=_requestedTime - In the implementation block
@property (nonatomic,readonly) double currentTime;                     //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,readonly) BOOL shouldSeek;                        //@synthesize shouldSeek=_shouldSeek - In the implementation block
@property (nonatomic,readonly) double proposedTime;                    //@synthesize proposedTime=_proposedTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties; 
-(NSDictionary *)properties;
-(double)currentTime;
-(double)proposedTime;
-(void)processReturnJSValue:(id)arg1 inContext:(id)arg2 ;
-(id)initWithRequestedTime:(double)arg1 currentTime:(double)arg2 ;
-(double)requestedTime;
-(BOOL)shouldSeek;
@end

