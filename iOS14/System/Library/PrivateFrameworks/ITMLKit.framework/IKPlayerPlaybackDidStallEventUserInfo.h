/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSDictionary, NSString;

@interface IKPlayerPlaybackDidStallEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	double _elapsedTime;

}

@property (nonatomic,readonly) double elapsedTime;                     //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (nonatomic,readonly) NSDictionary * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)properties;
-(double)elapsedTime;
-(id)initWithElapsedTime:(double)arg1 ;
@end

