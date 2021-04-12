/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber;

@interface ASPingItem : ASItem {

	NSArray* _folders;
	NSNumber* _heartBeatInterval;
	NSNumber* _maxFolders;
	NSNumber* _status;

}

@property (nonatomic,retain) NSArray * folders;                         //@synthesize folders=_folders - In the implementation block
@property (nonatomic,retain) NSNumber * heartBeatInterval;              //@synthesize heartBeatInterval=_heartBeatInterval - In the implementation block
@property (nonatomic,retain) NSNumber * maxFolders;                     //@synthesize maxFolders=_maxFolders - In the implementation block
@property (nonatomic,retain) NSNumber * status;                         //@synthesize status=_status - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSArray *)folders;
-(id)description;
-(void)setStatus:(NSNumber *)arg1 ;
-(void)setFolders:(NSArray *)arg1 ;
-(NSNumber *)status;
-(void)setHeartBeatInterval:(NSNumber *)arg1 ;
-(void)setMaxFolders:(NSNumber *)arg1 ;
-(NSNumber *)heartBeatInterval;
-(NSNumber *)maxFolders;
@end

