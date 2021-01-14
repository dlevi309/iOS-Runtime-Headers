/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/_KSTIUserDictionaryEntry.h>

@class NSString, NSDate;

@interface _KSTIUserDictionaryEntryValue : NSObject <NSSecureCoding, _KSTIUserDictionaryEntry> {

	NSString* _phrase;
	NSString* _shortcut;
	NSDate* _timestamp;

}

@property (nonatomic,copy) NSString * phrase;                       //@synthesize phrase=_phrase - In the implementation block
@property (nonatomic,copy) NSString * shortcut;                     //@synthesize shortcut=_shortcut - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)valueWithEntry:(id)arg1 ;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)matchesEntry:(id)arg1 ;
-(NSString *)shortcut;
-(id)shortcutForSorting;
-(NSString *)description;
-(NSString *)phrase;
-(void)setShortcut:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setPhrase:(NSString *)arg1 ;
@end

