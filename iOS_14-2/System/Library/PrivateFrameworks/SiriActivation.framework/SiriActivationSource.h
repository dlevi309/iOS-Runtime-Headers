/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/


#import <SiriActivation/SiriActivation-Structs.h>
@class BSServiceConnection, NSString;

@interface SiriActivationSource : NSObject {

	BSServiceConnection* _connection;
	os_unfair_lock_s _lock;
	BOOL _active;
	BOOL _knowsIfActive;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(BOOL)isActive;
-(void)invalidate;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(NSString *)identifier;
-(void)dealloc;
-(oneway void)activeChangedTo:(id)arg1 ;
@end

