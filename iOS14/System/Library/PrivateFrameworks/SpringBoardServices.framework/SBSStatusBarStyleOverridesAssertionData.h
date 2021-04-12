/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBSStatusBarStyleOverridesAssertionData : NSObject <NSSecureCoding, BSDescriptionProviding> {

	int _statusBarStyleOverrides;
	int _pid;
	BOOL _exclusive;
	BOOL _showsWhenForeground;
	NSString* _statusString;
	NSString* _uniqueIdentifier;

}

@property (assign,nonatomic) int statusBarStyleOverrides;                    //@synthesize statusBarStyleOverrides=_statusBarStyleOverrides - In the implementation block
@property (assign,nonatomic) int pid;                                        //@synthesize pid=_pid - In the implementation block
@property (assign,getter=isExclusive,nonatomic) BOOL exclusive;              //@synthesize exclusive=_exclusive - In the implementation block
@property (assign,nonatomic) BOOL showsWhenForeground;                       //@synthesize showsWhenForeground=_showsWhenForeground - In the implementation block
@property (nonatomic,copy) NSString * uniqueIdentifier;                      //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * statusString;                          //@synthesize statusString=_statusString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(id)succinctDescription;
-(int)pid;
-(id)init;
-(void)setExclusive:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(BOOL)isExclusive;
-(NSString *)description;
-(void)setStatusBarStyleOverrides:(int)arg1 ;
-(NSString *)statusString;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(int)statusBarStyleOverrides;
-(id)succinctDescriptionBuilder;
-(void)setPid:(int)arg1 ;
-(BOOL)showsWhenForeground;
-(id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3 showsWhenForeground:(BOOL)arg4 ;
-(id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3 showsWhenForeground:(BOOL)arg4 uniqueIdentifier:(id)arg5 ;
-(void)setShowsWhenForeground:(BOOL)arg1 ;
-(void)setStatusString:(NSString *)arg1 ;
@end

