/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASChangedFolderStore.h>

@class NSString;

@interface ASSingularChangedFolderStore : ASChangedFolderStore {

	NSString* _serverId;

}

@property (nonatomic,retain) NSString * serverId;              //@synthesize serverId=_serverId - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)setServerId:(NSString *)arg1 ;
-(NSString *)serverId;
@end

