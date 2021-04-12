/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setExclusive:(BOOL)arg1 ;
-(BOOL)isExclusive;
-(id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3 showsWhenForeground:(BOOL)arg4 ;
-(int)statusBarStyleOverrides;
-(BOOL)showsWhenForeground;
-(NSString *)statusString;
-(void)setStatusString:(NSString *)arg1 ;
-(id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3 showsWhenForeground:(BOOL)arg4 uniqueIdentifier:(id)arg5 ;
-(void)setStatusBarStyleOverrides:(int)arg1 ;
-(void)setShowsWhenForeground:(BOOL)arg1 ;
@end

