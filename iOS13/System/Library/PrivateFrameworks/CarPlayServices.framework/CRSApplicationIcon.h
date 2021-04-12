/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSData *)iconImageData;
-(double)iconImageScale;
-(NSString *)localizedDisplayName;
-(void)setIconImageData:(NSData *)arg1 ;
-(void)setIconImageScale:(double)arg1 ;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
@end

