/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CLSPublicEventPerformer : NSObject <NSSecureCoding> {

	NSString* _localizedName;
	NSString* _iTunesIdentifier;

}

@property (nonatomic,readonly) NSString * localizedName;                 //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) NSString * iTunesIdentifier;              //@synthesize iTunesIdentifier=_iTunesIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)localizedName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)iTunesIdentifier;
-(id)initWithLocalizedName:(id)arg1 iTunesIdentifier:(id)arg2 ;
@end

