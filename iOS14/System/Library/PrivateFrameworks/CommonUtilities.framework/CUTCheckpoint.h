/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/

#import <CommonUtilities/CommonUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CUTCheckpoint : NSObject <NSSecureCoding, NSCopying> {

	BOOL _frozen;
	BOOL _assertsUseAfterFreeze;
	BOOL _shouldLogTouches;
	NSString* _name;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL assertsUseAfterFreeze;                 //@synthesize assertsUseAfterFreeze=_assertsUseAfterFreeze - In the implementation block
@property (assign,nonatomic) BOOL shouldLogTouches;                      //@synthesize shouldLogTouches=_shouldLogTouches - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_whitelistedClasses;
+(id)_reportDateFormatter;
-(void)freeze;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(id)report;
-(void)_freeze;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)_reportName;
-(id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(BOOL)_assertNotFrozen;
-(BOOL)assertsUseAfterFreeze;
-(void)_appendReportToMutableString:(id)arg1 indentation:(long long)arg2 paddedNameLength:(long long)arg3 ;
-(id)_reportStartDate;
-(id)_reportEndDate;
-(id)_reportMetadata;
-(id)_freezeBacktrace;
-(void)setAssertsUseAfterFreeze:(BOOL)arg1 ;
-(void)setShouldLogTouches:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isFrozen;
-(BOOL)shouldLogTouches;
-(BOOL)isEqual:(id)arg1 ;
@end

