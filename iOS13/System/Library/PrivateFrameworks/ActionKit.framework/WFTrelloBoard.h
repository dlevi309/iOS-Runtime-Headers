/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFTrelloObject.h>

@class NSString, NSURL;

@interface WFTrelloBoard : WFTrelloObject {

	BOOL _closed;
	NSString* _itemDescription;
	NSURL* _URL;

}

@property (nonatomic,readonly) NSString * itemDescription;              //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) BOOL closed;                             //@synthesize closed=_closed - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)closedJSONTransformer;
-(NSURL *)URL;
-(BOOL)closed;
-(NSString *)itemDescription;
@end

