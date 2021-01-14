/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setData:(NSString *)arg1 ;
-(NSString *)data;
-(NSString *)attachmentContentType;
-(void)setAttachmentContentType:(NSString *)arg1 ;
@end

