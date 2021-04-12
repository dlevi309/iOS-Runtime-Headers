/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface EKRecurrenceIdentifier : NSObject <NSCopying> {

	NSString* _localUID;
	NSDate* _recurrenceDate;
	NSString* _identifierString;

}

@property (retain) NSString * localUID;                                //@synthesize localUID=_localUID - In the implementation block
@property (retain) NSDate * recurrenceDate;                            //@synthesize recurrenceDate=_recurrenceDate - In the implementation block
@property (nonatomic,retain) NSString * identifierString;              //@synthesize identifierString=_identifierString - In the implementation block
+(BOOL)_splitIdentifier:(id)arg1 intoLocalUID:(id*)arg2 recurrenceDate:(id*)arg3 ;
+(id)_recurrenceIdentifierWithRecurrenceDate:(id)arg1 localUID:(id)arg2 stripTime:(BOOL)arg3 stripTimeZone:(BOOL)arg4 ;
+(const char*)_dateFormatStripTime:(BOOL)arg1 stripTimeZone:(BOOL)arg2 ;
+(id)recurrenceIdentifierWithLocalUID:(id)arg1 recurrenceDate:(id)arg2 ;
+(id)recurrenceIdentifierWithString:(id)arg1 ;
+(id)localUIDForIdentifierString:(id)arg1 ;
+(id)_recurrenceStringForDate:(id)arg1 stripTime:(BOOL)arg2 stripTimeZone:(BOOL)arg3 ;
-(id)description;
-(NSString *)localUID;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLocalUID:(NSString *)arg1 ;
-(void)setRecurrenceDate:(NSDate *)arg1 ;
-(void)setIdentifierString:(NSString *)arg1 ;
-(NSDate *)recurrenceDate;
-(NSString *)identifierString;
@end

