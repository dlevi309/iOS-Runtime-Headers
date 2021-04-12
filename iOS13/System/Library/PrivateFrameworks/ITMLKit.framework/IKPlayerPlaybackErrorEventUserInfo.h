/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSError, NSString, NSDictionary;

@interface IKPlayerPlaybackErrorEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	BOOL _shouldStopDueToError;
	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;                        //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL shouldStopDueToError;              //@synthesize shouldStopDueToError=_shouldStopDueToError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties; 
-(NSError *)error;
-(NSDictionary *)properties;
-(id)initWithError:(id)arg1 shouldStopDueToError:(BOOL)arg2 ;
-(BOOL)shouldStopDueToError;
@end

