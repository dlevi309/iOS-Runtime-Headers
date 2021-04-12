/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSString, NSNumber;

@interface ASMovedItem : ASItem {

	NSString* _srcMsgId;
	NSNumber* _status;
	NSString* _dstMsgId;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)srcMsgId;
-(id)dstMsgId;
-(void)setDstMsgId:(id)arg1 ;
-(void)setSrcMsgId:(id)arg1 ;
@end

