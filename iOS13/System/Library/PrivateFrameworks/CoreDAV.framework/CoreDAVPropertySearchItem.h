/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, NSString;

@interface CoreDAVPropertySearchItem : CoreDAVItem {

	CoreDAVLeafItem* _prop;
	NSString* _match;
	NSString* _matchTypeAttribute;

}

@property (nonatomic,retain) CoreDAVLeafItem * prop;                     //@synthesize prop=_prop - In the implementation block
@property (nonatomic,retain) NSString * match;                           //@synthesize match=_match - In the implementation block
@property (nonatomic,retain) NSString * matchTypeAttribute;              //@synthesize matchTypeAttribute=_matchTypeAttribute - In the implementation block
-(int)wellKnownPrincipalSearchType;
-(id)init;
-(id)description;
-(void)write:(id)arg1 ;
-(NSString *)match;
-(void)setMatch:(NSString *)arg1 ;
-(id)initWithSearchPropertyNameSpace:(id)arg1 andName:(id)arg2 ;
-(CoreDAVLeafItem *)prop;
-(void)setMatchTypeAttribute:(NSString *)arg1 ;
-(void)setProp:(CoreDAVLeafItem *)arg1 ;
-(NSString *)matchTypeAttribute;
@end

