/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)serializedDictionary;
-(BOOL)isEqualToProfileWarning:(id)arg1 ;
-(BOOL)isLongForm;
-(id)initWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(BOOL)arg3 ;
-(NSString *)localizedBody;
-(void)setLocalizedBody:(NSString *)arg1 ;
-(void)setIsLongForm:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

