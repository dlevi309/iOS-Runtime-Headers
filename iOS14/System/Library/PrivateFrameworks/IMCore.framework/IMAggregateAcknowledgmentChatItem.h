/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)latestIsFromMe;
-(NSArray *)acknowledgments;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)latestAcknowledgmentType;
-(BOOL)includesFromMe;
-(BOOL)includesMultiple;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithAcknowledgments:(id)arg1 ;
-(IMMessageAcknowledgmentChatItem *)fromMeAcknowledgement;
@end

