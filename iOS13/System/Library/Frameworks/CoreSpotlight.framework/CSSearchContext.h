/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long queryID;                      //@synthesize queryID=_queryID - In the implementation block
@property (readonly) NSString * userQuery;                            //@synthesize userQuery=_userQuery - In the implementation block
@property (readonly) unsigned long long maxItemsCount;                //@synthesize maxItemsCount=_maxItemsCount - In the implementation block
@property (readonly) NSString * keyboardLanguage;                     //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (readonly) NSArray * preferredLanguages;                    //@synthesize preferredLanguages=_preferredLanguages - In the implementation block
@property (readonly) NSString * markedText;                           //@synthesize markedText=_markedText - In the implementation block
@property (readonly) unsigned long long markedTextStart;              //@synthesize markedTextStart=_markedTextStart - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)preferredLanguages;
-(NSString *)markedText;
-(NSString *)userQuery;
-(NSString *)keyboardLanguage;
-(id)initWithQueryID:(unsigned long long)arg1 userQuery:(id)arg2 maxItemsCount:(unsigned long long)arg3 keyboardLanguage:(id)arg4 preferredLanguages:(id)arg5 markedText:(id)arg6 markedTextStart:(unsigned long long)arg7 ;
-(unsigned long long)queryID;
-(id)initWithQueryID:(unsigned long long)arg1 userQuery:(id)arg2 maxItemsCount:(unsigned long long)arg3 keyboardLanguage:(id)arg4 preferredLanguages:(id)arg5 ;
-(unsigned long long)maxItemsCount;
-(unsigned long long)markedTextStart;
@end

