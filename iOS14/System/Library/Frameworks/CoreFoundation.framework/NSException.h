/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)raise:(id)arg1 format:(id)arg2 ;
+(id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(void)raise:(id)arg1 format:(id)arg2 arguments:(char*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)raise;
-(BOOL)_isUnarchived;
-(void)_markAsUnarchived;
-(BOOL)_installStackTraceKeyIfNeeded;
-(NSDictionary *)userInfo;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)callStackReturnAddresses;
-(NSString *)name;
-(id)description;
-(NSArray *)callStackSymbols;
-(NSString *)reason;
-(id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

