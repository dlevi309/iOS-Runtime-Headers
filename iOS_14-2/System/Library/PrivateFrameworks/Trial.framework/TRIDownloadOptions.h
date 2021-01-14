/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface TRIDownloadOptions : NSObject <NSSecureCoding> {

	BOOL _allowsCellularAccess;
	unsigned long long _discretionaryBehavior;
	NSObject*<OS_xpc_object> _activity;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> activity;                     //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;                             //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,nonatomic) unsigned long long discretionaryBehavior;              //@synthesize discretionaryBehavior=_discretionaryBehavior - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultOptions;
-(NSObject*<OS_xpc_object>)activity;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(id)description;
-(BOOL)allowsCellularAccess;
-(void)setDiscretionaryBehavior:(unsigned long long)arg1 ;
-(unsigned long long)discretionaryBehavior;
-(id)initFromPersistedBehavior:(id)arg1 ;
-(id)serializeToPersistedBehavior;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

