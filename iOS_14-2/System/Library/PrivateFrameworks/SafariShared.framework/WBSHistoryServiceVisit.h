/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/WBSHistoryServiceObject.h>

@class NSString;

@interface WBSHistoryServiceVisit : WBSHistoryServiceObject {

	BOOL _loadSuccessful;
	BOOL _httpNonGet;
	BOOL _synthesized;
	int _score;
	long long _itemID;
	NSString* _title;
	double _visitTime;
	long long _redirectSource;
	long long _redirectDestination;
	long long _origin;
	long long _generation;
	long long _attributes;

}

@property (nonatomic,readonly) long long itemID;                         //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) double visitTime;                         //@synthesize visitTime=_visitTime - In the implementation block
@property (nonatomic,readonly) BOOL loadSuccessful;                      //@synthesize loadSuccessful=_loadSuccessful - In the implementation block
@property (nonatomic,readonly) BOOL httpNonGet;                          //@synthesize httpNonGet=_httpNonGet - In the implementation block
@property (nonatomic,readonly) BOOL synthesized;                         //@synthesize synthesized=_synthesized - In the implementation block
@property (assign,nonatomic) long long redirectSource;                   //@synthesize redirectSource=_redirectSource - In the implementation block
@property (assign,nonatomic) long long redirectDestination;              //@synthesize redirectDestination=_redirectDestination - In the implementation block
@property (assign,nonatomic) long long origin;                           //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) long long generation;                       //@synthesize generation=_generation - In the implementation block
@property (assign,nonatomic) long long attributes;                       //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) int score;                                  //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setOrigin:(long long)arg1 ;
-(void)setGeneration:(long long)arg1 ;
-(long long)generation;
-(long long)origin;
-(long long)redirectSource;
-(int)score;
-(void)setAttributes:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setScore:(int)arg1 ;
-(void)setRedirectDestination:(long long)arg1 ;
-(id)initWithSQLRow:(id)arg1 ;
-(long long)attributes;
-(long long)itemID;
-(long long)redirectDestination;
-(BOOL)httpNonGet;
-(BOOL)synthesized;
-(id)_initWithDatabaseID:(long long)arg1 serviceVisit:(id)arg2 ;
-(id)initWithVisit:(id)arg1 ;
-(id)visitWithUpdatedID:(long long)arg1 updatedItemID:(long long)arg2 ;
-(double)visitTime;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)loadSuccessful;
-(void)setRedirectSource:(long long)arg1 ;
-(NSString *)title;
@end

