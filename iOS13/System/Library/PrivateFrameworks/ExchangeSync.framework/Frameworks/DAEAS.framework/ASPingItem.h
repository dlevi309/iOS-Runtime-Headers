/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
-(void)setFolders:(NSArray *)arg1 ;
-(NSArray *)folders;
-(void)setHeartBeatInterval:(NSNumber *)arg1 ;
-(void)setMaxFolders:(NSNumber *)arg1 ;
-(NSNumber *)heartBeatInterval;
-(NSNumber *)maxFolders;
@end

