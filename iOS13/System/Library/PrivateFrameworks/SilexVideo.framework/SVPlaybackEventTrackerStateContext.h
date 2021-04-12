/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/NFStateMachineContextType.h>

@class NSError, NSString;

@interface SVPlaybackEventTrackerStateContext : NSObject <NFStateMachineContextType> {

	NSError* _error;

}

@property (nonatomic,copy,readonly) NSError * error;                //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)error;
-(id)initWithError:(id)arg1 ;
@end

