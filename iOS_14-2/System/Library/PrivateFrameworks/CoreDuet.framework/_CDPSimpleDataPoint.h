/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_CDPDataPoint.h>

@class NSDate, NSArray, NSString;

@interface _CDPSimpleDataPoint : NSObject <_CDPDataPoint> {

	BOOL _userIsSender;
	BOOL _userIsThreadInitiator;
	NSDate* _timestamp;
	NSArray* _peopleIdentifiers;
	NSString* _title;

}

@property (assign,nonatomic) BOOL userIsSender;                        //@synthesize userIsSender=_userIsSender - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSArray * peopleIdentifiers;              //@synthesize peopleIdentifiers=_peopleIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL userIsThreadInitiator;               //@synthesize userIsThreadInitiator=_userIsThreadInitiator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)timestamp;
-(void)setTitle:(NSString *)arg1 ;
-(void)setPeopleIdentifiers:(NSArray *)arg1 ;
-(NSArray *)peopleIdentifiers;
-(BOOL)userIsSender;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)title;
-(void)setUserIsSender:(BOOL)arg1 ;
-(void)setUserIsThreadInitiator:(BOOL)arg1 ;
-(BOOL)userIsThreadInitiator;
@end

