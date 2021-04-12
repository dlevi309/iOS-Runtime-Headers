/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/

#import <RTTUtilities/RTTUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface RTTUtterance : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isMe;
	BOOL _ignoreTimeoutTemporarily;
	NSString* _contactPath;
	NSString* _text;
	NSDate* _lastChangeDate;

}

@property (nonatomic,retain) NSString * contactPath;                     //@synthesize contactPath=_contactPath - In the implementation block
@property (nonatomic,copy) NSString * text;                              //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSDate * lastChangeDate;                    //@synthesize lastChangeDate=_lastChangeDate - In the implementation block
@property (assign,nonatomic) BOOL isMe;                                  //@synthesize isMe=_isMe - In the implementation block
@property (assign,nonatomic) BOOL ignoreTimeoutTemporarily;              //@synthesize ignoreTimeoutTemporarily=_ignoreTimeoutTemporarily - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)contactPathIsMe:(id)arg1 ;
+(id)utteranceWithContactPath:(id)arg1 andText:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isComplete;
-(BOOL)isMe;
-(void)setIsMe:(BOOL)arg1 ;
-(BOOL)hasTimedOut;
-(NSString *)contactPath;
-(void)updateText:(id)arg1 ;
-(void)setContactPath:(NSString *)arg1 ;
-(NSDate *)lastChangeDate;
-(void)setLastChangeDate:(NSDate *)arg1 ;
-(BOOL)ignoreTimeoutTemporarily;
-(void)setIgnoreTimeoutTemporarily:(BOOL)arg1 ;
-(void)resetTimeout;
@end

