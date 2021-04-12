/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isNaturalLanguageSuggestedEvent;
-(void)setNaturalLanguageSuggestedEvent:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
@end

