/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(long long)layoutRole;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(void)_commonInit;
-(void)setLayoutRole:(long long)arg1 ;
-(BOOL)isLayoutPrimary;
-(BOOL)isLayoutFullscreenModal;
@end

