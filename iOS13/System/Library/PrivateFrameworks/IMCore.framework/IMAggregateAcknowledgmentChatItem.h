/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMAssociatedMessageChatItem.h>

@class NSArray, IMMessageAcknowledgmentChatItem;

@interface IMAggregateAcknowledgmentChatItem : IMAssociatedMessageChatItem {

	BOOL _latestIsFromMe;
	BOOL _includesMultiple;
	NSArray* _acknowledgments;
	IMMessageAcknowledgmentChatItem* _fromMeAcknowledgement;
	long long _latestAcknowledgmentType;

}

@property (nonatomic,copy,readonly) NSArray * acknowledgments;                                       //@synthesize acknowledgments=_acknowledgments - In the implementation block
@property (nonatomic,readonly) IMMessageAcknowledgmentChatItem * fromMeAcknowledgement;              //@synthesize fromMeAcknowledgement=_fromMeAcknowledgement - In the implementation block
@property (nonatomic,readonly) BOOL includesFromMe; 
@property (nonatomic,readonly) BOOL latestIsFromMe;                                                  //@synthesize latestIsFromMe=_latestIsFromMe - In the implementation block
@property (nonatomic,readonly) BOOL includesMultiple;                                                //@synthesize includesMultiple=_includesMultiple - In the implementation block
@property (nonatomic,readonly) long long latestAcknowledgmentType;                                   //@synthesize latestAcknowledgmentType=_latestAcknowledgmentType - In the implementation block
-(Class)__ck_chatItemClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)acknowledgments;
-(long long)latestAcknowledgmentType;
-(BOOL)includesFromMe;
-(BOOL)latestIsFromMe;
-(BOOL)includesMultiple;
-(id)_initWithAcknowledgments:(id)arg1 ;
-(IMMessageAcknowledgmentChatItem *)fromMeAcknowledgement;
@end

