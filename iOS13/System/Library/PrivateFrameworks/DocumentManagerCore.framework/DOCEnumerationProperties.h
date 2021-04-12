/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
*/


@class NSNumber, NSArray, NSString;

@interface DOCEnumerationProperties : NSObject {

	NSNumber* _maximumNumberOfItems;
	NSArray* _tagIdentifiers;
	NSArray* _excludedFileTypes;
	NSArray* _allowedFileTypes;
	NSString* _hostIdentifier;

}

@property (copy) NSNumber * maximumNumberOfItems;              //@synthesize maximumNumberOfItems=_maximumNumberOfItems - In the implementation block
@property (copy) NSArray * tagIdentifiers;                     //@synthesize tagIdentifiers=_tagIdentifiers - In the implementation block
@property (copy) NSArray * excludedFileTypes;                  //@synthesize excludedFileTypes=_excludedFileTypes - In the implementation block
@property (copy) NSArray * allowedFileTypes;                   //@synthesize allowedFileTypes=_allowedFileTypes - In the implementation block
@property (copy) NSString * hostIdentifier;                    //@synthesize hostIdentifier=_hostIdentifier - In the implementation block
-(NSString *)hostIdentifier;
-(void)setHostIdentifier:(NSString *)arg1 ;
-(NSNumber *)maximumNumberOfItems;
-(void)setMaximumNumberOfItems:(NSNumber *)arg1 ;
-(void)setAllowedFileTypes:(NSArray *)arg1 ;
-(NSArray *)allowedFileTypes;
-(void)setExcludedFileTypes:(NSArray *)arg1 ;
-(NSArray *)excludedFileTypes;
-(id)initWithHostIdentifier:(id)arg1 maximumNumberOfItems:(long long)arg2 allowedDocumentTypes:(id)arg3 excludedDocumentTypes:(id)arg4 tags:(id)arg5 ;
-(void)setTagIdentifiers:(NSArray *)arg1 ;
-(id)initWithConfiguration:(id)arg1 tags:(id)arg2 ;
-(NSArray *)tagIdentifiers;
@end

