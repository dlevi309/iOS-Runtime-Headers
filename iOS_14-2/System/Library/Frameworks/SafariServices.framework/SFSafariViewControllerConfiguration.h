/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SFSafariViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _ephemeral;
	BOOL _performingAccountSecurityUpgrade;
	BOOL _entersReaderIfAvailable;
	BOOL _barCollapsingEnabled;
	long long _redirectNotificationBehavior;

}

@property (assign,nonatomic) long long _redirectNotificationBehavior;              //@synthesize redirectNotificationBehavior=_redirectNotificationBehavior - In the implementation block
@property (assign,nonatomic) BOOL entersReaderIfAvailable;                         //@synthesize entersReaderIfAvailable=_entersReaderIfAvailable - In the implementation block
@property (assign,nonatomic) BOOL barCollapsingEnabled;                            //@synthesize barCollapsingEnabled=_barCollapsingEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)_setPerformingAccountSecurityUpgrade:(BOOL)arg1 ;
-(id)init;
-(BOOL)entersReaderIfAvailable;
-(void)setEntersReaderIfAvailable:(BOOL)arg1 ;
-(void)_setEphemeral:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isPerformingAccountSecurityUpgrade;
-(long long)_redirectNotificationBehavior;
-(void)setBarCollapsingEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isEphemeral;
-(void)set_redirectNotificationBehavior:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)barCollapsingEnabled;
@end

