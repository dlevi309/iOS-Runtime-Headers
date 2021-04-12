/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSDictionary, NSString;

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
@property (nonatomic,readonly) NSDictionary * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)properties;
-(double)proposedTime;
-(double)currentTime;
-(void)processReturnJSValue:(id)arg1 inContext:(id)arg2 ;
-(id)initWithRequestedTime:(double)arg1 currentTime:(double)arg2 ;
-(double)requestedTime;
-(BOOL)shouldSeek;
@end

