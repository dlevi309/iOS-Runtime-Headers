/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableArray *)hrefs;
-(CoreDAVItemWithHrefChildItem *)location;
-(void)setLocation:(CoreDAVItemWithHrefChildItem *)arg1 ;
-(id)description;
-(id)successfulPropertiesToValues;
-(id)firstHref;
-(void)setStatus:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)status;
-(CoreDAVErrorItem *)errorItem;
-(NSMutableSet *)propStats;
-(CoreDAVLeafItem *)responseDescription;
-(CoreDAVLeafItem *)serverUID;
-(CoreDAVMatchResultsItem *)matchResults;
-(void)addHref:(id)arg1 ;
-(void)addPropStat:(id)arg1 ;
-(void)setErrorItem:(CoreDAVErrorItem *)arg1 ;
-(void)setResponseDescription:(CoreDAVLeafItem *)arg1 ;
-(void)setServerUID:(CoreDAVLeafItem *)arg1 ;
-(void)setMatchResults:(CoreDAVMatchResultsItem *)arg1 ;
-(void)setPropStats:(NSMutableSet *)arg1 ;
-(void)setHrefs:(NSMutableArray *)arg1 ;
-(BOOL)hasPropertyError;
@end

