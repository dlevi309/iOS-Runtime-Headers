/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AXAppRepresentation : NSObject <NSSecureCoding> {

	int _pid;
	NSString* _bundleIdentifier;
	long long _layoutRole;

}

@property (assign,nonatomic) int pid;                                     //@synthesize pid=_pid - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) long long layoutRole;                        //@synthesize layoutRole=_layoutRole - In the implementation block
@property (nonatomic,readonly) BOOL isLayoutPrimary; 
@property (nonatomic,readonly) BOOL isLayoutFullscreenModal; 
+(BOOL)supportsSecureCoding;
+(id)appWithPID:(int)arg1 bundleID:(id)arg2 ;
-(long long)layoutRole;
-(int)pid;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)description;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)setPid:(int)arg1 ;
-(void)setLayoutRole:(long long)arg1 ;
-(BOOL)isLayoutPrimary;
-(BOOL)isLayoutFullscreenModal;
@end

