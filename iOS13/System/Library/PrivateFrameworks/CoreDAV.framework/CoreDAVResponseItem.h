/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableArray, CoreDAVLeafItem, NSMutableSet, CoreDAVErrorItem, CoreDAVItemWithHrefChildItem, CoreDAVMatchResultsItem;

@interface CoreDAVResponseItem : CoreDAVItem {

	NSMutableArray* _hrefs;
	CoreDAVLeafItem* _status;
	NSMutableSet* _propStats;
	CoreDAVErrorItem* _errorItem;
	CoreDAVLeafItem* _responseDescription;
	CoreDAVItemWithHrefChildItem* _location;
	CoreDAVLeafItem* _serverUID;
	CoreDAVMatchResultsItem* _matchResults;

}

@property (nonatomic,retain) NSMutableArray * hrefs;                               //@synthesize hrefs=_hrefs - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * status;                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableSet * propStats;                             //@synthesize propStats=_propStats - In the implementation block
@property (nonatomic,retain) CoreDAVErrorItem * errorItem;                         //@synthesize errorItem=_errorItem - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * responseDescription;                //@synthesize responseDescription=_responseDescription - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithHrefChildItem * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * serverUID;                          //@synthesize serverUID=_serverUID - In the implementation block
@property (nonatomic,retain) CoreDAVMatchResultsItem * matchResults;               //@synthesize matchResults=_matchResults - In the implementation block
+(id)copyParseRules;
-(id)init;
-(id)description;
-(CoreDAVLeafItem *)status;
-(CoreDAVItemWithHrefChildItem *)location;
-(void)setStatus:(CoreDAVLeafItem *)arg1 ;
-(void)setLocation:(CoreDAVItemWithHrefChildItem *)arg1 ;
-(CoreDAVMatchResultsItem *)matchResults;
-(id)successfulPropertiesToValues;
-(id)firstHref;
-(NSMutableArray *)hrefs;
-(void)setResponseDescription:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)responseDescription;
-(BOOL)hasPropertyError;
-(CoreDAVErrorItem *)errorItem;
-(NSMutableSet *)propStats;
-(CoreDAVLeafItem *)serverUID;
-(void)addHref:(id)arg1 ;
-(void)addPropStat:(id)arg1 ;
-(void)setErrorItem:(CoreDAVErrorItem *)arg1 ;
-(void)setServerUID:(CoreDAVLeafItem *)arg1 ;
-(void)setMatchResults:(CoreDAVMatchResultsItem *)arg1 ;
-(void)setPropStats:(NSMutableSet *)arg1 ;
-(void)setHrefs:(NSMutableArray *)arg1 ;
@end

