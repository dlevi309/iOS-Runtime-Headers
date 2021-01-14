/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <libobjc.A.dylib/IAMTriggerContext.h>

@protocol IAMEventProtocol;
@class NSString;

@interface IAMReceivedEventTriggerContext : NSObject <IAMTriggerContext> {

	NSString* _bundleIdentifier;
	id<IAMEventProtocol> _event;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) id<IAMEventProtocol> event;               //@synthesize event=_event - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEvent:(id)arg1 bundleIdentifier:(id)arg2 ;
-(NSString *)bundleIdentifier;
-(id<IAMEventProtocol>)event;
-(BOOL)satisfiesPresentationTrigger:(id)arg1 ;
@end

