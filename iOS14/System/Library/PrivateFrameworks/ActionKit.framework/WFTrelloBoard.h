/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)closed;
-(NSURL *)URL;
-(NSString *)itemDescription;
@end

