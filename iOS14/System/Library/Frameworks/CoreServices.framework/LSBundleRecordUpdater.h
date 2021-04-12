/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSRecordBuilder.h>

@class NSString;

@interface LSBundleRecordUpdater : LSRecordBuilder {

	LSContext _context;
	BOOL _hasContext;
	unsigned _bundleID;
	LSBundleData _bundleData;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(BOOL)updateBundleRecord:(id*)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 preferPlaceholder:(BOOL)arg2 ;
-(void)parseSINFDictionary:(id)arg1 ;
-(void)parseiTunesMetadata:(id)arg1 ;
-(void)parseManagedPersonaIDs:(id)arg1 containsSystemPersona:(BOOL)arg2 ;
-(void)parsePlaceholderMetadata:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)dealloc;
@end

