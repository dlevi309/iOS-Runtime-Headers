/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface AXBuddyDataPackage : NSObject <NSSecureCoding> {

	BOOL _usesExtendedSlider;
	NSDictionary* _accessibilityOptions;
	NSString* _axOSVersion;
	NSString* _axModel;
	NSString* _axPreferredContentSizeCategoryName;

}

@property (nonatomic,retain) NSDictionary * accessibilityOptions;                        //@synthesize accessibilityOptions=_accessibilityOptions - In the implementation block
@property (nonatomic,retain) NSString * axOSVersion;                                     //@synthesize axOSVersion=_axOSVersion - In the implementation block
@property (nonatomic,retain) NSString * axModel;                                         //@synthesize axModel=_axModel - In the implementation block
@property (nonatomic,retain) NSString * axPreferredContentSizeCategoryName;              //@synthesize axPreferredContentSizeCategoryName=_axPreferredContentSizeCategoryName - In the implementation block
@property (assign,nonatomic) BOOL usesExtendedSlider;                                    //@synthesize usesExtendedSlider=_usesExtendedSlider - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)testData;
+(id)productVersionForBuddy;
+(id)deviceClassForBuddy;
+(void)setTestData:(id)arg1 ;
+(id)dataPackageForCurrentSettings;
+(void)setTestData:(id)arg1 forModel:(id)arg2 hasHomeButton:(BOOL)arg3 largeTextUsesExtendedRange:(BOOL)arg4 ;
+(id)dataBlobForBuddy;
+(void)restoreDataBlobForBuddy:(id)arg1 ;
-(NSString *)axModel;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAxModel:(NSString *)arg1 ;
-(void)setAccessibilityOptions:(NSDictionary *)arg1 ;
-(void)setAxPreferredContentSizeCategoryName:(NSString *)arg1 ;
-(void)setAxOSVersion:(NSString *)arg1 ;
-(void)setUsesExtendedSlider:(BOOL)arg1 ;
-(NSString *)axOSVersion;
-(NSDictionary *)accessibilityOptions;
-(NSString *)axPreferredContentSizeCategoryName;
-(BOOL)usesExtendedSlider;
-(void)processDomainDictionary:(id)arg1 ;
-(void)applySavedSettings;
-(id)initWithCoder:(id)arg1 ;
@end

