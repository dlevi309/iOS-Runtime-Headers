/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSString, NSDictionary;

@interface IKPlayerTimeDidChangeEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	double _interval;
	double _elapsedTime;

}

@property (nonatomic,readonly) double interval;                        //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) double elapsedTime;                     //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties; 
-(double)interval;
-(NSDictionary *)properties;
-(double)elapsedTime;
-(id)initWithInterval:(double)arg1 elapsedTime:(double)arg2 ;
@end

