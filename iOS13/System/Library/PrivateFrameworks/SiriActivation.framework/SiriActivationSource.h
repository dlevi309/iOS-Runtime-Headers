/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(NSString *)identifier;
-(BOOL)isActive;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(oneway void)activeChangedTo:(id)arg1 ;
@end

