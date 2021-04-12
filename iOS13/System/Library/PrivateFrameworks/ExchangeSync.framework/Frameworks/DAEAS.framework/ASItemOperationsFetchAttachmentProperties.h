/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSString;

@interface ASItemOperationsFetchAttachmentProperties : ASItem {

	NSString* _attachmentContentType;
	NSString* _data;

}

@property (nonatomic,retain) NSString * attachmentContentType;              //@synthesize attachmentContentType=_attachmentContentType - In the implementation block
@property (nonatomic,retain) NSString * data;                               //@synthesize data=_data - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSString *)data;
-(void)setData:(NSString *)arg1 ;
-(NSString *)attachmentContentType;
-(void)setAttachmentContentType:(NSString *)arg1 ;
@end

