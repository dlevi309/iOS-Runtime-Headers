/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary, NSMutableArray, NSData;

@interface _KSFileEntry : NSObject <NSSecureCoding> {

	NSString* _name;
	NSMutableDictionary* _extendedAttributes;
	NSMutableArray* _tempFiles;
	NSMutableArray* _fileArray;
	NSData* _fileBlob;

}

@property (nonatomic,retain,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * extendedAttributes;              //@synthesize extendedAttributes=_extendedAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)entryWithSerialisedDataAtURL:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSMutableDictionary *)extendedAttributes;
-(void)consistencyCheck;
-(void)restoreToPath:(id)arg1 ;
-(void)performOnEverything:(/*^block*/id)arg1 ;
-(id)temporaryFileNameForType:(id)arg1 ;
-(id)serialiseToTemporaryFile;
-(unsigned long long)addBlobToFile:(id)arg1 ;
-(void)loadAttributesFromURL:(id)arg1 ;
-(void)saveAttributesToURL:(id)arg1 ;
@end

