/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)dueDate;
-(NSURL *)URL;
-(NSString *)itemDescription;
-(NSNumber *)creationPosition;
@end

