/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

@class NSString, EKEventStore;


@protocol EKJunkInvitationProtocol_Private <NSObject>
@property (nonatomic,readonly) NSString * sendersEmail; 
@property (nonatomic,readonly) NSString * sendersPhoneNumber; 
@property (nonatomic,readonly) BOOL supportsJunkReporting; 
@property (nonatomic,readonly) EKEventStore * eventStore; 
@required
-(EKEventStore *)eventStore;
-(BOOL)couldBeJunk;
-(NSString *)sendersEmail;
-(NSString *)sendersPhoneNumber;
-(BOOL)supportsJunkReporting;

@end

