/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedName;
-(NSString *)iTunesIdentifier;
-(id)initWithLocalizedName:(id)arg1 iTunesIdentifier:(id)arg2 ;
@end

