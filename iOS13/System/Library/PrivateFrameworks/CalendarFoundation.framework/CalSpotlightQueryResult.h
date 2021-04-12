/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@class NSString;

@interface CalSpotlightQueryResult : NSObject {

	BOOL _naturalLanguageSuggestedEvent;
	NSString* _identifier;
	NSString* _title;

}

@property (retain) NSString * identifier;                                                                            //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * title;                                                                                 //@synthesize title=_title - In the implementation block
@property (assign,getter=isNaturalLanguageSuggestedEvent,nonatomic) BOOL naturalLanguageSuggestedEvent;              //@synthesize naturalLanguageSuggestedEvent=_naturalLanguageSuggestedEvent - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setNaturalLanguageSuggestedEvent:(BOOL)arg1 ;
-(BOOL)isNaturalLanguageSuggestedEvent;
@end

