/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, NSString, NSDate, NSDictionary;

@interface IMAssociatedMessageChatItem : IMTranscriptChatItem {

	IMAssociatedMessageGeometryDescriptor _geometryDescriptor;
	BOOL _parentMessageIsFromMe;
	IMHandle* _sender;

}

@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) BOOL parentMessageIsFromMe; 
@property (nonatomic,readonly) BOOL failed; 
@property (nonatomic,readonly) NSString * associatedMessageGUID; 
@property (nonatomic,readonly) long long associatedMessageType; 
@property (nonatomic,readonly) NSRange associatedMessageRange; 
@property (nonatomic,readonly) IMAssociatedMessageGeometryDescriptor geometryDescriptor;              //@synthesize geometryDescriptor=_geometryDescriptor - In the implementation block
@property (nonatomic,readonly) NSDate * time; 
@property (nonatomic,readonly) IMHandle * sender;                                                     //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) NSDictionary * messageSummaryInfo; 
-(NSDate *)time;
-(IMHandle *)sender;
-(id)message;
-(long long)associatedMessageType;
-(NSDictionary *)messageSummaryInfo;
-(BOOL)failed;
-(NSRange)associatedMessageRange;
-(BOOL)isFromMe;
-(IMAssociatedMessageGeometryDescriptor)geometryDescriptor;
-(BOOL)parentMessageIsFromMe;
-(NSString *)associatedMessageGUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setParentMessageIsFromMe:(BOOL)arg1 ;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 ;
-(id)_imAssociatedMessageItem;
@end

