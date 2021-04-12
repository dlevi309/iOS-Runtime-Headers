/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MCProfileWarning : NSObject <NSSecureCoding> {

	NSString* _localizedTitle;
	NSString* _localizedBody;
	BOOL _isLongForm;

}

@property (nonatomic,retain) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,retain) NSString * localizedBody;               //@synthesize localizedBody=_localizedBody - In the implementation block
@property (assign,nonatomic) BOOL isLongForm;                        //@synthesize isLongForm=_isLongForm - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)warningWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(BOOL)arg3 ;
-(BOOL)isEqualToProfileWarning:(id)arg1 ;
-(NSString *)localizedTitle;
-(NSString *)localizedBody;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setLocalizedBody:(NSString *)arg1 ;
-(BOOL)isLongForm;
-(void)setIsLongForm:(BOOL)arg1 ;
@end

