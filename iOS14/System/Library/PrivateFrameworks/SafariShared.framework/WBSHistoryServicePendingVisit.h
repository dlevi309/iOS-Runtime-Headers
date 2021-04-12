/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class WBSHistoryVisitIdentifier, NSString;

@interface WBSHistoryServicePendingVisit : NSObject {

	BOOL _wasHTTPNonGet;
	BOOL _loadSuccessful;
	WBSHistoryVisitIdentifier* _visitIdentifier;
	unsigned long long _operation;
	WBSHistoryVisitIdentifier* _sourceVisitIdentifier;
	NSString* _title;
	long long _origin;
	unsigned long long _attributes;

}

@property (nonatomic,readonly) WBSHistoryVisitIdentifier * visitIdentifier;                  //@synthesize visitIdentifier=_visitIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long operation;                                   //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) WBSHistoryVisitIdentifier * sourceVisitIdentifier;              //@synthesize sourceVisitIdentifier=_sourceVisitIdentifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL wasHTTPNonGet;                                             //@synthesize wasHTTPNonGet=_wasHTTPNonGet - In the implementation block
@property (assign,nonatomic) BOOL loadSuccessful;                                            //@synthesize loadSuccessful=_loadSuccessful - In the implementation block
@property (assign,nonatomic) long long origin;                                               //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) unsigned long long attributes;                                  //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSString * urlString; 
@property (nonatomic,readonly) double visitTime; 
@property (nonatomic,readonly) unsigned long long score; 
-(void)setOrigin:(long long)arg1 ;
-(NSString *)urlString;
-(long long)origin;
-(void)setOperation:(unsigned long long)arg1 ;
-(unsigned long long)operation;
-(unsigned long long)score;
-(void)setAttributes:(unsigned long long)arg1 ;
-(id)initWithWithVisitIdentifier:(id)arg1 ;
-(WBSHistoryVisitIdentifier *)sourceVisitIdentifier;
-(void)setSourceVisitIdentifier:(WBSHistoryVisitIdentifier *)arg1 ;
-(void)setWasHTTPNonGet:(BOOL)arg1 ;
-(void)setLoadSuccessful:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)attributes;
-(WBSHistoryVisitIdentifier *)visitIdentifier;
-(double)visitTime;
-(BOOL)loadSuccessful;
-(BOOL)wasHTTPNonGet;
-(NSString *)title;
@end

