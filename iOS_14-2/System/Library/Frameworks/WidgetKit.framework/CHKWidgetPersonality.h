/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WidgetKit.framework/WidgetKit
*/

#import <libobjc.A.dylib/CHSWidgetPersonality.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CHKWidgetPersonality : NSObject <CHSWidgetPersonality, NSSecureCoding> {

	 extensionBundleIdentifier;
	 kind;

}

@property (readonly,nonatomic) NSString * extensionBundleIdentifier; 
@property (readonly,nonatomic) NSString * kind; 
@property (readonly,nonatomic) long long hash; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)matchesPersonality:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)kind;
-(NSString *)description;
-(long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)extensionBundleIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

