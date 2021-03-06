/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSArray;

@interface NEBundleProxy : NSObject <NSSecureCoding> {

	BOOL _isWatchKitApp;
	NSString* _identifier;
	NSURL* _url;
	NSArray* _machOUUIDs;
	NSString* _name;

}

@property (nonatomic,retain,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (nonatomic,retain,readonly) NSArray * machOUUIDs;               //@synthesize machOUUIDs=_machOUUIDs - In the implementation block
@property (nonatomic,retain,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL isWatchKitApp;                          //@synthesize isWatchKitApp=_isWatchKitApp - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)machOUUIDs;
-(BOOL)isWatchKitApp;
-(id)initWithIdentifier:(id)arg1 url:(id)arg2 machOUUIDs:(id)arg3 name:(id)arg4 ;
-(void)setIsWatchKitApp:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSString *)name;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
@end

