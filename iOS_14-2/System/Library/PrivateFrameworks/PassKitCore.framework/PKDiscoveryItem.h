/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKDiscoveryObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSArray;

@interface PKDiscoveryItem : PKDiscoveryObject <NSSecureCoding, NSCopying> {

	BOOL _shouldBadge;
	long long _type;
	NSURL* _layoutBundleURL;
	NSArray* _supportedLocalizations;
	long long _priority;

}

@property (assign,nonatomic) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSURL * layoutBundleURL;                         //@synthesize layoutBundleURL=_layoutBundleURL - In the implementation block
@property (nonatomic,retain) NSArray * supportedLocalizations;              //@synthesize supportedLocalizations=_supportedLocalizations - In the implementation block
@property (assign,nonatomic) BOOL shouldBadge;                              //@synthesize shouldBadge=_shouldBadge - In the implementation block
@property (assign,nonatomic) long long priority;                            //@synthesize priority=_priority - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setShouldBadge:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)updateForRuleResult:(BOOL)arg1 ;
-(NSURL *)layoutBundleURL;
-(void)setLayoutBundleURL:(NSURL *)arg1 ;
-(void)updateWithDiscoveryItem:(id)arg1 ;
-(void)setSupportedLocalizations:(NSArray *)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)supportedLocalizations;
-(long long)priority;
-(BOOL)shouldBadge;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(long long)arg1 ;
@end

