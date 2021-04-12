/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <MobileMailUI/MessageItemViewModel.h>
#import <libobjc.A.dylib/MessageHeaderViewModelBuilder.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol EFObserver;
@class NSDate, ECSubject, MFMailboxUid, NSArray, MFAddressAtomStatusManager, EFObservable, NSString, NSIndexSet;

@interface MessageHeaderViewModel : MessageItemViewModel <MessageHeaderViewModelBuilder, NSCopying> {

	NSDate* _dateSent;
	ECSubject* _subject;
	MFMailboxUid* _mailbox;
	NSArray* _senderList;
	NSArray* _toList;
	NSArray* _ccList;
	NSArray* _bccList;
	MFAddressAtomStatusManager* _atomManager;
	EFObservable*<EFObserver> _observableObserver;

}

@property (nonatomic,copy) NSDate * dateSent;                                           //@synthesize dateSent=_dateSent - In the implementation block
@property (nonatomic,copy) ECSubject * subject;                                         //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) MFMailboxUid * mailbox;                                      //@synthesize mailbox=_mailbox - In the implementation block
@property (nonatomic,copy) NSArray * senderList;                                        //@synthesize senderList=_senderList - In the implementation block
@property (nonatomic,copy) NSArray * toList;                                            //@synthesize toList=_toList - In the implementation block
@property (nonatomic,copy) NSArray * ccList;                                            //@synthesize ccList=_ccList - In the implementation block
@property (nonatomic,copy) NSArray * bccList;                                           //@synthesize bccList=_bccList - In the implementation block
@property (nonatomic,retain) MFAddressAtomStatusManager * atomManager;                  //@synthesize atomManager=_atomManager - In the implementation block
@property (nonatomic,retain) EFObservable*<EFObserver> observableObserver;              //@synthesize observableObserver=_observableObserver - In the implementation block
@property (nonatomic,readonly) EFObservable * modelObservable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isRead,nonatomic) BOOL read; 
@property (assign,getter=isFlagged,nonatomic) BOOL flagged; 
@property (nonatomic,copy) NSIndexSet * flagColors; 
@property (assign,getter=isReplied,nonatomic) BOOL replied; 
@property (assign,getter=isForwarded,nonatomic) BOOL forwarded; 
@property (assign,getter=isVIP,nonatomic) BOOL VIP; 
@property (assign,getter=isNotify,nonatomic) BOOL notify; 
@property (assign,getter=isMute,nonatomic) BOOL mute; 
@property (assign,getter=isBlockedSender,nonatomic) BOOL blockedSender; 
@property (assign,nonatomic) BOOL hasAttachments; 
@property (nonatomic,copy) NSDate * dateReceived; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(ECSubject *)subject;
-(void)setSubject:(ECSubject *)arg1 ;
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(NSDate *)dateSent;
-(void)setDateSent:(NSDate *)arg1 ;
-(MFMailboxUid *)mailbox;
-(void)setMailbox:(MFMailboxUid *)arg1 ;
-(void)setSenderList:(NSArray *)arg1 ;
-(void)setToList:(NSArray *)arg1 ;
-(void)setCcList:(NSArray *)arg1 ;
-(void)setBccList:(NSArray *)arg1 ;
-(EFObservable*<EFObserver>)observableObserver;
-(NSArray *)senderList;
-(NSArray *)toList;
-(NSArray *)ccList;
-(NSArray *)bccList;
-(MFAddressAtomStatusManager *)atomManager;
-(void)setAtomManager:(MFAddressAtomStatusManager *)arg1 ;
-(void)setObservableObserver:(EFObservable*<EFObserver>)arg1 ;
-(BOOL)_flagsChangedInModel:(id)arg1 ;
-(id)initWithItemBuilder:(/*^block*/id)arg1 ;
-(EFObservable *)modelObservable;
-(id)updatedFlagsModelWithBuilder:(/*^block*/id)arg1 ;
-(id)updatedModelWithMessage:(id)arg1 ;
@end

