/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CoreDAVLeafItem *)prop;
-(void)write:(id)arg1 ;
-(NSString *)match;
-(void)setMatch:(NSString *)arg1 ;
-(id)description;
-(void)setProp:(CoreDAVLeafItem *)arg1 ;
-(NSString *)matchTypeAttribute;
-(id)initWithSearchPropertyNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)setMatchTypeAttribute:(NSString *)arg1 ;
@end

