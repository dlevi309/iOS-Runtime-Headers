/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSDate;

@interface SGURL : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _flags;
	NSURL* _url;
	NSString* _title;
	NSString* _receivedFromHandle;
	NSString* _bundleIdentifier;
	NSString* _groupIdentifier;
	NSString* _documentIdentifier;
	NSString* _documentTitle;
	NSDate* _documentDate;
	double _documentTimeInterval;
	NSDate* _receivedAt;

}

@property (nonatomic,readonly) NSURL * url;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * receivedFromHandle;              //@synthesize receivedFromHandle=_receivedFromHandle - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier;                 //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * documentIdentifier;              //@synthesize documentIdentifier=_documentIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * documentTitle;                   //@synthesize documentTitle=_documentTitle - In the implementation block
@property (nonatomic,readonly) NSDate * documentDate;                      //@synthesize documentDate=_documentDate - In the implementation block
@property (nonatomic,readonly) double documentTimeInterval;                //@synthesize documentTimeInterval=_documentTimeInterval - In the implementation block
@property (nonatomic,readonly) NSDate * receivedAt;                        //@synthesize receivedAt=_receivedAt - In the implementation block
@property (nonatomic,readonly) unsigned char flags;                        //@synthesize flags=_flags - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)groupIdentifier;
-(id)init;
-(unsigned char)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSURL *)url;
-(NSString *)receivedFromHandle;
-(NSString *)documentTitle;
-(id)initWithURL:(id)arg1 title:(id)arg2 receivedFromHandle:(id)arg3 bundleIdentifier:(id)arg4 groupIdentifier:(id)arg5 documentIdentifier:(id)arg6 documentTitle:(id)arg7 documentDate:(id)arg8 documentTimeInterval:(double)arg9 receivedAt:(id)arg10 flags:(unsigned char)arg11 ;
-(id)description;
-(NSDate *)documentDate;
-(double)documentTimeInterval;
-(NSString *)documentIdentifier;
-(unsigned long long)hash;
-(BOOL)isEqualToURL:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)receivedAt;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

