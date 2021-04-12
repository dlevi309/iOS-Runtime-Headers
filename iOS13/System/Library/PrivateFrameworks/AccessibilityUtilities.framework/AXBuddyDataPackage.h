/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)dataBlobForBuddy;
+(void)restoreDataBlobForBuddy:(id)arg1 ;
+(id)testData;
+(id)productVersionForBuddy;
+(id)deviceClassForBuddy;
+(void)setTestData:(id)arg1 ;
+(id)dataPackageForCurrentSettings;
+(void)setTestData:(id)arg1 forModel:(id)arg2 hasHomeButton:(BOOL)arg3 largeTextUsesExtendedRange:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAccessibilityOptions:(NSDictionary *)arg1 ;
-(void)setAxPreferredContentSizeCategoryName:(NSString *)arg1 ;
-(void)setAxOSVersion:(NSString *)arg1 ;
-(void)setAxModel:(NSString *)arg1 ;
-(void)setUsesExtendedSlider:(BOOL)arg1 ;
-(NSDictionary *)accessibilityOptions;
-(NSString *)axPreferredContentSizeCategoryName;
-(NSString *)axOSVersion;
-(NSString *)axModel;
-(BOOL)usesExtendedSlider;
-(void)processDomainDictionary:(id)arg1 ;
-(void)applySavedSettings;
@end

