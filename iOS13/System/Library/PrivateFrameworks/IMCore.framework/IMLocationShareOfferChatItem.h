/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>
#import <IMCore/IMMessageChatItem.h>

@class IMHandle, NSString, NSDate;

@interface IMLocationShareOfferChatItem : IMTranscriptChatItem <IMMessageChatItem> {

	IMHandle* _sender;
	BOOL _actionableEclipsed;

}

@property (nonatomic,readonly) long long offerState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) BOOL failed; 
@property (nonatomic,readonly) NSDate * time; 
@property (nonatomic,readonly) IMHandle * sender;                   //@synthesize sender=_sender - In the implementation block
-(Class)__ck_chatItemClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)time;
-(IMHandle *)sender;
-(BOOL)failed;
-(BOOL)isFromMe;
-(long long)offerState;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 ;
-(void)_setActionableEclipsed:(BOOL)arg1 ;
-(BOOL)_isActionableEclipsed;
@end

