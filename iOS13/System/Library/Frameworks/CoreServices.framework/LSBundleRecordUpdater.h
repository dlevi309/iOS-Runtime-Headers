/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 preferPlaceholder:(BOOL)arg2 ;
-(void)parseSINFDictionary:(id)arg1 ;
-(void)parseiTunesMetadata:(id)arg1 ;
-(void)parsePlaceholderMetadata:(id)arg1 ;
-(BOOL)updateBundleRecord:(id*)arg1 ;
@end

