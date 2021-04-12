/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSArray;

@interface NSException : NSObject <NSCopying, NSSecureCoding> {

	NSString* name;
	NSString* reason;
	NSDictionary* userInfo;
	id reserved;

}

@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * reason; 
@property (copy,readonly) NSDictionary * userInfo; 
@property (copy,readonly) NSArray * callStackReturnAddresses; 
@property (copy,readonly) NSArray * callStackSymbols; 
+(BOOL)supportsSecureCoding;
+(id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(void)raise:(id)arg1 format:(id)arg2 arguments:(char*)arg3 ;
+(void)raise:(id)arg1 format:(id)arg2 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)redactedDescription;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
-(NSArray *)callStackReturnAddresses;
-(NSArray *)callStackSymbols;
-(BOOL)_isUnarchived;
-(void)_markAsUnarchived;
-(BOOL)_installStackTraceKeyIfNeeded;
-(void)raise;
@end

