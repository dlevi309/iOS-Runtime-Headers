/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface ICLibraryAuthServiceClientTokenIdentifier : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _DSID;
	NSString* _deviceGUID;

}

@property (nonatomic,copy,readonly) NSNumber * DSID;                    //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceGUID;              //@synthesize deviceGUID=_deviceGUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)DSID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSString *)deviceGUID;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

