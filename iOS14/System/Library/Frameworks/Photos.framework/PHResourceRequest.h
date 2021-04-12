/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface PHResourceRequest : NSObject <NSSecureCoding> {

	BOOL _wantsProgress;
	NSString* _taskIdentifier;
	NSURL* _assetObjectIDURL;

}

@property (nonatomic,readonly) NSString * taskIdentifier;              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * assetObjectIDURL;               //@synthesize assetObjectIDURL=_assetObjectIDURL - In the implementation block
@property (assign,nonatomic) BOOL wantsProgress;                       //@synthesize wantsProgress=_wantsProgress - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithTaskIdentifier:(id)arg1 assetObjectIDURL:(id)arg2 ;
-(id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 ;
-(NSURL *)assetObjectIDURL;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)taskIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)wantsProgress;
-(void)setWantsProgress:(BOOL)arg1 ;
@end

