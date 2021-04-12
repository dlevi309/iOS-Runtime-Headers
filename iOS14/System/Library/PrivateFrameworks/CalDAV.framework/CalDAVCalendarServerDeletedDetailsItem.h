/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSString, ICSDateValue;

@interface CalDAVCalendarServerDeletedDetailsItem : CoreDAVItem {

	BOOL _hadMoreInstances;
	NSString* _componentType;
	NSString* _summary;
	NSString* _displayName;
	ICSDateValue* _nextInstance;

}

@property (nonatomic,retain) NSString * componentType;                 //@synthesize componentType=_componentType - In the implementation block
@property (nonatomic,retain) NSString * summary;                       //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) ICSDateValue * nextInstance;              //@synthesize nextInstance=_nextInstance - In the implementation block
@property (assign,nonatomic) BOOL hadMoreInstances;                    //@synthesize hadMoreInstances=_hadMoreInstances - In the implementation block
-(id)init;
-(void)setComponentType:(NSString *)arg1 ;
-(NSString *)summary;
-(NSString *)componentType;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
-(NSString *)displayName;
-(id)copyParseRules;
-(void)setDisplayNameItem:(id)arg1 ;
-(void)setNextInstance:(ICSDateValue *)arg1 ;
-(void)setHadMoreInstances:(BOOL)arg1 ;
-(void)setComponentTypeItem:(id)arg1 ;
-(void)setSummaryItem:(id)arg1 ;
-(void)setNextInstanceItem:(id)arg1 ;
-(void)setHadMoreInstancesItem:(id)arg1 ;
-(ICSDateValue *)nextInstance;
-(BOOL)hadMoreInstances;
@end

