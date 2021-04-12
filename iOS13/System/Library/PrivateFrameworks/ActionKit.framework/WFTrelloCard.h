/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFTrelloObject.h>

@class NSString, NSNumber, NSDate, NSURL;

@interface WFTrelloCard : WFTrelloObject {

	NSString* _itemDescription;
	NSNumber* _creationPosition;
	NSDate* _dueDate;
	NSURL* _URL;

}

@property (nonatomic,readonly) NSString * itemDescription;               //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,readonly) NSNumber * creationPosition;              //@synthesize creationPosition=_creationPosition - In the implementation block
@property (nonatomic,readonly) NSDate * dueDate;                         //@synthesize dueDate=_dueDate - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)dueDateJSONTransformer;
-(NSURL *)URL;
-(NSDate *)dueDate;
-(NSString *)itemDescription;
-(NSNumber *)creationPosition;
@end

