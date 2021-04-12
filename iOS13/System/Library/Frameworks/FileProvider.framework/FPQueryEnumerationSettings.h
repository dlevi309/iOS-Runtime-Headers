/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FileProvider-Structs.h>
#import <FileProvider/FPEnumerationSettings.h>

@class NSArray, NSNumber, NSString;

@interface FPQueryEnumerationSettings : FPEnumerationSettings {

	NSArray* _allowedProviders;
	NSNumber* _desiredNumberOfItems;
	NSArray* _excludedFileTypes;
	NSArray* _allowedFileTypes;
	NSString* _tagIdentifier;

}

@property (copy) NSArray * allowedProviders;                   //@synthesize allowedProviders=_allowedProviders - In the implementation block
@property (copy) NSNumber * desiredNumberOfItems;              //@synthesize desiredNumberOfItems=_desiredNumberOfItems - In the implementation block
@property (copy) NSArray * excludedFileTypes;                  //@synthesize excludedFileTypes=_excludedFileTypes - In the implementation block
@property (copy) NSArray * allowedFileTypes;                   //@synthesize allowedFileTypes=_allowedFileTypes - In the implementation block
@property (copy) NSString * tagIdentifier;                     //@synthesize tagIdentifier=_tagIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)tagIdentifier;
-(void)setTagIdentifier:(NSString *)arg1 ;
-(void)setDesiredNumberOfItems:(NSNumber *)arg1 ;
-(NSNumber *)desiredNumberOfItems;
-(void)setAllowedFileTypes:(NSArray *)arg1 ;
-(NSArray *)allowedFileTypes;
-(void)setExcludedFileTypes:(NSArray *)arg1 ;
-(NSArray *)excludedFileTypes;
-(void)setAllowedProviders:(NSArray *)arg1 ;
-(NSArray *)allowedProviders;
@end

