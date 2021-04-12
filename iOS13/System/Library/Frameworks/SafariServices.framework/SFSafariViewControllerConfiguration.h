/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SFSafariViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _ephemeral;
	BOOL _entersReaderIfAvailable;
	BOOL _barCollapsingEnabled;
	long long _redirectNotificationBehavior;

}

@property (assign,nonatomic) long long _redirectNotificationBehavior;              //@synthesize redirectNotificationBehavior=_redirectNotificationBehavior - In the implementation block
@property (assign,nonatomic) BOOL entersReaderIfAvailable;                         //@synthesize entersReaderIfAvailable=_entersReaderIfAvailable - In the implementation block
@property (assign,nonatomic) BOOL barCollapsingEnabled;                            //@synthesize barCollapsingEnabled=_barCollapsingEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isEphemeral;
-(void)setEntersReaderIfAvailable:(BOOL)arg1 ;
-(void)_setEphemeral:(BOOL)arg1 ;
-(void)setBarCollapsingEnabled:(BOOL)arg1 ;
-(long long)_redirectNotificationBehavior;
-(BOOL)barCollapsingEnabled;
-(BOOL)entersReaderIfAvailable;
-(void)set_redirectNotificationBehavior:(long long)arg1 ;
@end

