/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TipsDaemon-Structs.h>
#import <TipsCore/TPSSerializableObject.h>

@class NSDate, NSString, NSArray;

@interface TPSContextualRule : TPSSerializableObject {

	NSDate* _matchedDate;
	NSString* _identifier;
	NSArray* _eventIdentifiers;

}

@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * eventIdentifiers;              //@synthesize eventIdentifiers=_eventIdentifiers - In the implementation block
@property (nonatomic,copy) NSDate * matchedDate;                    //@synthesize matchedDate=_matchedDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventsForRuleDictionary:(id)arg1 ;
+(id)classSet;
-(NSArray *)eventIdentifiers;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(void)setMatchedDate:(NSDate *)arg1 ;
-(NSDate *)matchedDate;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEventIdentifiers:(NSArray *)arg1 ;
-(void)restartTracking;
@end

