/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <libobjc.A.dylib/MessageItemViewModelBuilder.h>

@class NSDate, NSIndexSet, NSString;

@interface MessageItemViewModel : NSObject <MessageItemViewModelBuilder> {

	BOOL _read;
	BOOL _flagged;
	BOOL _replied;
	BOOL _forwarded;
	BOOL _VIP;
	BOOL _notify;
	BOOL _mute;
	BOOL _blockedSender;
	BOOL _hasAttachments;
	NSIndexSet* _flagColors;
	NSDate* _dateReceived;

}

@property (assign,getter=isRead,nonatomic) BOOL read;                                //@synthesize read=_read - In the implementation block
@property (assign,getter=isFlagged,nonatomic) BOOL flagged;                          //@synthesize flagged=_flagged - In the implementation block
@property (nonatomic,copy) NSIndexSet * flagColors;                                  //@synthesize flagColors=_flagColors - In the implementation block
@property (assign,getter=isReplied,nonatomic) BOOL replied;                          //@synthesize replied=_replied - In the implementation block
@property (assign,getter=isForwarded,nonatomic) BOOL forwarded;                      //@synthesize forwarded=_forwarded - In the implementation block
@property (assign,getter=isVIP,nonatomic) BOOL VIP;                                  //@synthesize VIP=_VIP - In the implementation block
@property (assign,getter=isNotify,nonatomic) BOOL notify;                            //@synthesize notify=_notify - In the implementation block
@property (assign,getter=isMute,nonatomic) BOOL mute;                                //@synthesize mute=_mute - In the implementation block
@property (assign,getter=isBlockedSender,nonatomic) BOOL blockedSender;              //@synthesize blockedSender=_blockedSender - In the implementation block
@property (assign,nonatomic) BOOL hasAttachments;                                    //@synthesize hasAttachments=_hasAttachments - In the implementation block
@property (nonatomic,copy) NSDate * dateReceived;                                    //@synthesize dateReceived=_dateReceived - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isVIP;
-(void)setVIP:(BOOL)arg1 ;
-(void)setFlagged:(BOOL)arg1 ;
-(void)setNotify:(BOOL)arg1 ;
-(void)setHasAttachments:(BOOL)arg1 ;
-(void)setMute:(BOOL)arg1 ;
-(BOOL)hasAttachments;
-(void)setDateReceived:(NSDate *)arg1 ;
-(BOOL)isMute;
-(void)setReplied:(BOOL)arg1 ;
-(void)setForwarded:(BOOL)arg1 ;
-(NSIndexSet *)flagColors;
-(void)setFlagColors:(NSIndexSet *)arg1 ;
-(NSDate *)dateReceived;
-(void)setRead:(BOOL)arg1 ;
-(BOOL)isRead;
-(BOOL)isBlockedSender;
-(void)setBlockedSender:(BOOL)arg1 ;
-(BOOL)isFlagged;
-(BOOL)isReplied;
-(BOOL)isForwarded;
-(BOOL)isNotify;
-(id)initWithItemBuilder:(/*^block*/id)arg1 ;
@end

