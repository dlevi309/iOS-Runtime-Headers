/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPNowPlayingInfoTransportableSessionRequest.h>

@class NSString;

@interface _MPNowPlayingInfoTransportableSessionRequest : NSObject <MPNowPlayingInfoTransportableSessionRequest> {

	NSString* _identifier;
	NSString* _preferredSessionType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * preferredSessionType;              //@synthesize preferredSessionType=_preferredSessionType - In the implementation block
+(id)requestWithIdentifier:(id)arg1 preferredSessionType:(id)arg2 ;
-(NSString *)identifier;
-(NSString *)preferredSessionType;
@end

