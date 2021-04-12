/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class NSString, NSDictionary, NSURL;

@interface HMAsset : NSObject {

	NSString* _identifier;
	NSDictionary* _metadata;
	NSURL* _resourceURL;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,copy,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;                              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSURL * resourceURL;                                  //@synthesize resourceURL=_resourceURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSURL *)resourceURL;
-(NSDictionary *)dictionaryRepresentation;
-(NSDictionary *)metadata;
-(id)initWithIdentifier:(id)arg1 metadata:(id)arg2 resourceURL:(id)arg3 ;
@end

