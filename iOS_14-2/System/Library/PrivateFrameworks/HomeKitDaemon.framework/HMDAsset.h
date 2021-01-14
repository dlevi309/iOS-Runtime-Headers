/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSURL;

@interface HMDAsset : HMFObject <NSSecureCoding> {

	NSString* _identifier;
	NSDictionary* _metadata;
	NSURL* _resourceURL;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;                              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSURL * resourceURL;                                  //@synthesize resourceURL=_resourceURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)resourceURL;
-(NSString *)identifier;
-(NSDictionary *)metadata;
-(id)initWithIdentifier:(id)arg1 metadata:(id)arg2 resourceURL:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

