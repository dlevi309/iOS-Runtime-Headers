/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
*/


@class NSDictionary, ICQLink, NSString;

@interface _ICQButtonSpecification : NSObject {

	NSDictionary* _serverDict;
	ICQLink* _buttonLink;
	NSString* _buttonFormat;
	NSDictionary* _linkForBundleIdentifier;

}

@property (nonatomic,readonly) NSString * buttonFormat;                           //@synthesize buttonFormat=_buttonFormat - In the implementation block
@property (nonatomic,readonly) ICQLink * buttonLink; 
@property (nonatomic,retain) NSDictionary * linkForBundleIdentifier;              //@synthesize linkForBundleIdentifier=_linkForBundleIdentifier - In the implementation block
+(id)buttonSpecificationSampleForLevel:(long long)arg1 ;
-(id)initWithServerDictionary:(id)arg1 ;
-(ICQLink *)buttonLink;
-(id)linkForBundleIdentifier:(id)arg1 ;
-(NSDictionary *)linkForBundleIdentifier;
-(NSString *)buttonFormat;
-(void)setLinkForBundleIdentifier:(NSDictionary *)arg1 ;
@end

