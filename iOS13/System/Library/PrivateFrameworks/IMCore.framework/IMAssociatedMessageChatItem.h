/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)time;
-(id)message;
-(IMHandle *)sender;
-(BOOL)failed;
-(BOOL)isFromMe;
-(NSDictionary *)messageSummaryInfo;
-(long long)associatedMessageType;
-(NSString *)associatedMessageGUID;
-(NSRange)associatedMessageRange;
-(BOOL)parentMessageIsFromMe;
-(IMAssociatedMessageGeometryDescriptor)geometryDescriptor;
-(void)_setParentMessageIsFromMe:(BOOL)arg1 ;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 ;
-(id)_imAssociatedMessageItem;
@end

