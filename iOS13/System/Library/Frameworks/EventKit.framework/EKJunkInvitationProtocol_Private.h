/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)supportsJunkReporting;
-(NSString *)sendersEmail;
-(NSString *)sendersPhoneNumber;

@end

