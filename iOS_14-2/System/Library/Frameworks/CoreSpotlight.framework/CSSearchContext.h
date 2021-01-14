/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface CSSearchContext : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _queryID;
	NSString* _userQuery;
	unsigned long long _maxItemsCount;
	NSString* _keyboardLanguage;
	NSArray* _preferredLanguages;
	NSString* _markedText;
	unsigned long long _markedTextStart;

}

@property (readonly) unsigned long long queryID;                                     //@synthesize queryID=_queryID - In the implementation block
@property (readonly) NSString * userQuery;                                           //@synthesize userQuery=_userQuery - In the implementation block
@property (readonly) unsigned long long maxItemsCount;                               //@synthesize maxItemsCount=_maxItemsCount - In the implementation block
@property (readonly) NSString * keyboardLanguage;                                    //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (readonly) NSArray * preferredLanguages;                                   //@synthesize preferredLanguages=_preferredLanguages - In the implementation block
@property (readonly) NSString * markedText;                                          //@synthesize markedText=_markedText - In the implementation block
@property (readonly) unsigned long long markedTextStart;                             //@synthesize markedTextStart=_markedTextStart - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpc_dictionary; 
+(BOOL)supportsSecureCoding;
-(NSObject*<OS_xpc_object>)xpc_dictionary;
-(NSString *)keyboardLanguage;
-(unsigned long long)maxItemsCount;
-(NSArray *)preferredLanguages;
-(unsigned long long)markedTextStart;
-(id)initWithQueryID:(unsigned long long)arg1 userQuery:(id)arg2 maxItemsCount:(unsigned long long)arg3 keyboardLanguage:(id)arg4 preferredLanguages:(id)arg5 markedText:(id)arg6 markedTextStart:(unsigned long long)arg7 ;
-(id)initWithQueryID:(unsigned long long)arg1 userQuery:(id)arg2 maxItemsCount:(unsigned long long)arg3 keyboardLanguage:(id)arg4 preferredLanguages:(id)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)userQuery;
-(id)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)markedText;
-(unsigned long long)queryID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

