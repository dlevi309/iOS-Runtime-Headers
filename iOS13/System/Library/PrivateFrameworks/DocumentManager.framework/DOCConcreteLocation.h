/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/

#import <DocumentManager/DocumentManager-Structs.h>
#import <libobjc.A.dylib/DOCLocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, FPItem, NSArray;

@interface DOCConcreteLocation : NSObject <DOCLocation, NSSecureCoding> {

	BOOL _needsToResolveHierarchy;
	BOOL _isFPV2;
	BOOL _canBeRestored;
	NSString* _originalSourceIdentifier;
	FPItem* _fileProviderItem;
	NSString* _promptText;
	NSString* _sourceIdentifier;
	NSString* _title;
	NSArray* _tags;

}

@property (assign) BOOL canBeRestored;                             //@synthesize canBeRestored=_canBeRestored - In the implementation block
@property (copy) NSArray * tags;                                   //@synthesize tags=_tags - In the implementation block
@property (copy) NSString * originalSourceIdentifier;              //@synthesize originalSourceIdentifier=_originalSourceIdentifier - In the implementation block
@property (readonly) NSString * shortDescription; 
@property (readonly) BOOL isRoot; 
@property (retain) FPItem * fileProviderItem;                      //@synthesize fileProviderItem=_fileProviderItem - In the implementation block
@property (copy) NSString * promptText;                            //@synthesize promptText=_promptText - In the implementation block
@property (copy) NSString * sourceIdentifier;                      //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (assign) BOOL needsToResolveHierarchy;                   //@synthesize needsToResolveHierarchy=_needsToResolveHierarchy - In the implementation block
@property (assign) BOOL isFPV2;                                    //@synthesize isFPV2=_isFPV2 - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)searchLocation;
+(id)recentsLocation;
+(id)recentDocumentsLocation;
+(id)sharedItemsLocation;
+(id)trashedItemsLocation;
+(id)defaultLocation;
+(id)defaultSaveLocation;
+(id)iCloudDriveLocation;
+(id)emptyLocation;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTags:(id)arg1 ;
-(NSArray *)tags;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isRoot;
-(NSString *)shortDescription;
-(void)setTags:(NSArray *)arg1 ;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)sourceIdentifier;
-(FPItem *)fileProviderItem;
-(void)setFileProviderItem:(FPItem *)arg1 ;
-(void)setCanBeRestored:(BOOL)arg1 ;
-(void)setIsFPV2:(BOOL)arg1 ;
-(void)setPromptText:(NSString *)arg1 ;
-(void)setOriginalSourceIdentifier:(NSString *)arg1 ;
-(NSString *)promptText;
-(BOOL)isFPV2;
-(BOOL)canBeRestored;
-(id)initWithSourceIdentifier:(id)arg1 fileProviderItem:(id)arg2 ;
-(id)placeholderLocation;
-(NSString *)originalSourceIdentifier;
-(BOOL)needsToResolveHierarchy;
-(void)setNeedsToResolveHierarchy:(BOOL)arg1 ;
-(id)navigationItemTitlesForConfiguration:(id)arg1 ;
@end

