/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol CKDSystemAvailabilityWatcher;
@class NSString;

@interface CKDSystemAvailabilityWatcherWrapper : NSObject {

	id<CKDSystemAvailabilityWatcher> _delegate;
	unsigned long long _savedDelegateHash;
	NSString* _personaID;

}

@property (assign,nonatomic,__weak) id<CKDSystemAvailabilityWatcher> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long savedDelegateHash;                          //@synthesize savedDelegateHash=_savedDelegateHash - In the implementation block
@property (nonatomic,copy) NSString * personaID;                                            //@synthesize personaID=_personaID - In the implementation block
-(void)setPersonaID:(NSString *)arg1 ;
-(id<CKDSystemAvailabilityWatcher>)delegate;
-(NSString *)personaID;
-(void)setDelegate:(id<CKDSystemAvailabilityWatcher>)arg1 ;
-(id)description;
-(id)initWithDelegate:(id)arg1 ;
-(unsigned long long)hash;
-(void)postSystemAvailabilityChanged:(unsigned long long)arg1 ;
-(unsigned long long)savedDelegateHash;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSavedDelegateHash:(unsigned long long)arg1 ;
@end

