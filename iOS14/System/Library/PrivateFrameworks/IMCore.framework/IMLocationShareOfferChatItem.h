/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>
#import <IMCore/IMMessageChatItem.h>

@class IMHandle, NSDate, NSString;

@interface IMLocationShareOfferChatItem : IMTranscriptChatItem <IMMessageChatItem> {

	IMHandle* _sender;
	BOOL _actionableEclipsed;

}

@property (nonatomic,readonly) long long offerState; 
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) BOOL failed; 
@property (nonatomic,readonly) NSDate * time; 
@property (nonatomic,readonly) IMHandle * sender;                   //@synthesize sender=_sender - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)__ck_chatItemClass;
-(NSDate *)time;
-(IMHandle *)sender;
-(long long)offerState;
-(BOOL)failed;
-(BOOL)isFromMe;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 ;
-(void)_setActionableEclipsed:(BOOL)arg1 ;
-(BOOL)_isActionableEclipsed;
@end

