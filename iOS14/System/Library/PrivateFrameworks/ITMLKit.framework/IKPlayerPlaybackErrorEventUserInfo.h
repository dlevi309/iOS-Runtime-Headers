/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSError, NSDictionary, NSString;

@interface IKPlayerPlaybackErrorEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	BOOL _shouldStopDueToError;
	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;                        //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL shouldStopDueToError;              //@synthesize shouldStopDueToError=_shouldStopDueToError - In the implementation block
@property (nonatomic,readonly) NSDictionary * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)properties;
-(NSError *)error;
-(id)initWithError:(id)arg1 shouldStopDueToError:(BOOL)arg2 ;
-(BOOL)shouldStopDueToError;
@end

