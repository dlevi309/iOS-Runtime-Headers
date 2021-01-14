/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)consistencyCheck;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableDictionary *)extendedAttributes;
-(void)dealloc;
-(void)restoreToPath:(id)arg1 ;
-(void)performOnEverything:(/*^block*/id)arg1 ;
-(id)temporaryFileNameForType:(id)arg1 ;
-(id)serialiseToTemporaryFile;
-(unsigned long long)addBlobToFile:(id)arg1 ;
-(void)loadAttributesFromURL:(id)arg1 ;
-(void)saveAttributesToURL:(id)arg1 ;
@end

