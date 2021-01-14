/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface CRSApplicationIcon : NSObject <NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSData* _iconImageData;
	double _iconImageScale;
	NSString* _localizedDisplayName;

}

@property (nonatomic,retain) NSData * iconImageData;                          //@synthesize iconImageData=_iconImageData - In the implementation block
@property (assign,nonatomic) double iconImageScale;                           //@synthesize iconImageScale=_iconImageScale - In the implementation block
@property (nonatomic,retain) NSString * localizedDisplayName;                 //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)description;
-(NSString *)localizedDisplayName;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)iconImageData;
-(void)setIconImageData:(NSData *)arg1 ;
-(double)iconImageScale;
-(void)setIconImageScale:(double)arg1 ;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
@end

