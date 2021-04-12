/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)freeze;
-(NSString *)uniqueIdentifier;
-(id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(BOOL)_assertNotFrozen;
-(BOOL)isFrozen;
-(void)_freeze;
-(BOOL)assertsUseAfterFreeze;
-(void)_appendReportToMutableString:(id)arg1 indentation:(long long)arg2 paddedNameLength:(long long)arg3 ;
-(id)_reportName;
-(id)_reportStartDate;
-(id)_reportEndDate;
-(id)_reportMetadata;
-(id)_freezeBacktrace;
-(id)report;
-(void)setAssertsUseAfterFreeze:(BOOL)arg1 ;
-(BOOL)shouldLogTouches;
-(void)setShouldLogTouches:(BOOL)arg1 ;
@end

