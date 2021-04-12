/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSString, CUPairedPeer, NSArray;

@interface CUHomeKitFindPairedPeerContext : NSObject {

	BOOL _triedAccessory;
	BOOL _triedHAP;
	/*^block*/id _completion;
	NSString* _identifier;
	unsigned long long _options;
	CUPairedPeer* _pairedPeer;
	unsigned long long _startTicks;
	NSArray* _users;
	unsigned long long _userIndex;
	unsigned long long _userCount;

}

@property (nonatomic,copy) id completion;                                //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long options;                 //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) CUPairedPeer * pairedPeer;                  //@synthesize pairedPeer=_pairedPeer - In the implementation block
@property (assign,nonatomic) BOOL triedAccessory;                        //@synthesize triedAccessory=_triedAccessory - In the implementation block
@property (assign,nonatomic) BOOL triedHAP;                              //@synthesize triedHAP=_triedHAP - In the implementation block
@property (assign,nonatomic) unsigned long long startTicks;              //@synthesize startTicks=_startTicks - In the implementation block
@property (nonatomic,retain) NSArray * users;                            //@synthesize users=_users - In the implementation block
@property (assign,nonatomic) unsigned long long userIndex;               //@synthesize userIndex=_userIndex - In the implementation block
@property (assign,nonatomic) unsigned long long userCount;               //@synthesize userCount=_userCount - In the implementation block
-(unsigned long long)options;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(NSArray *)users;
-(CUPairedPeer *)pairedPeer;
-(void)setPairedPeer:(CUPairedPeer *)arg1 ;
-(BOOL)triedAccessory;
-(void)setTriedAccessory:(BOOL)arg1 ;
-(BOOL)triedHAP;
-(void)setTriedHAP:(BOOL)arg1 ;
-(unsigned long long)startTicks;
-(void)setStartTicks:(unsigned long long)arg1 ;
-(void)setUsers:(NSArray *)arg1 ;
-(unsigned long long)userIndex;
-(void)setUserIndex:(unsigned long long)arg1 ;
-(unsigned long long)userCount;
-(void)setUserCount:(unsigned long long)arg1 ;
@end

