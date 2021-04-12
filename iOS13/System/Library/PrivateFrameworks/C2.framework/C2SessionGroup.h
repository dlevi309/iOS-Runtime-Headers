/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/


@class NSString, C2Session, NSArray;

@interface C2SessionGroup : NSObject {

	NSString* _configurationName;
	C2Session* _pinnedSessionAllowingExpiredDNS;
	C2Session* _pinnedSession;
	C2Session* _unpinnedSession;

}

@property (nonatomic,retain) NSString * configurationName;                             //@synthesize configurationName=_configurationName - In the implementation block
@property (nonatomic,retain) C2Session * pinnedSessionAllowingExpiredDNS;              //@synthesize pinnedSessionAllowingExpiredDNS=_pinnedSessionAllowingExpiredDNS - In the implementation block
@property (nonatomic,retain) C2Session * pinnedSession;                                //@synthesize pinnedSession=_pinnedSession - In the implementation block
@property (nonatomic,retain) C2Session * unpinnedSession;                              //@synthesize unpinnedSession=_unpinnedSession - In the implementation block
@property (nonatomic,readonly) NSArray * sessions; 
@property (nonatomic,readonly) BOOL isEmpty; 
-(BOOL)isEmpty;
-(NSArray *)sessions;
-(NSString *)configurationName;
-(BOOL)removeSession:(id)arg1 ;
-(void)setConfigurationName:(NSString *)arg1 ;
-(id)initWithConfigurationName:(id)arg1 ;
-(id)sessionForOptions:(id)arg1 ;
-(void)setSession:(id)arg1 forOptions:(id)arg2 ;
-(C2Session *)pinnedSessionAllowingExpiredDNS;
-(void)setPinnedSessionAllowingExpiredDNS:(C2Session *)arg1 ;
-(C2Session *)pinnedSession;
-(void)setPinnedSession:(C2Session *)arg1 ;
-(C2Session *)unpinnedSession;
-(void)setUnpinnedSession:(C2Session *)arg1 ;
@end

