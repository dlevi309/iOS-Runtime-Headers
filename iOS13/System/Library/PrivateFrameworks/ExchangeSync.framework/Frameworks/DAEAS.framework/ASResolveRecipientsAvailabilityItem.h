/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSString;

@interface ASResolveRecipientsAvailabilityItem : ASItem {

	NSNumber* _easStatus;
	NSString* _mergedFreeBusy;

}

@property (setter=setEASStatus:,nonatomic,retain) NSNumber * easStatus;              //@synthesize easStatus=_easStatus - In the implementation block
@property (nonatomic,retain) NSString * mergedFreeBusy;                              //@synthesize mergedFreeBusy=_mergedFreeBusy - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(NSString *)mergedFreeBusy;
-(void)setMergedFreeBusy:(NSString *)arg1 ;
-(NSNumber *)easStatus;
-(void)setEASStatus:(id)arg1 ;
@end

