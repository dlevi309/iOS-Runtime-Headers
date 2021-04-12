/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/NSItemProviderWriting.h>
#import <libobjc.A.dylib/NSItemProviderReading.h>

@class NSArray, NSString, NSURL;

@interface PHObjectReference : NSObject <NSItemProviderWriting, NSItemProviderReading> {

	NSString* _representedType;
	NSString* _localIdentifier;
	NSURL* _libraryURL;

}

@property (nonatomic,copy,readonly) NSURL * libraryURL;                                            //@synthesize libraryURL=_libraryURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * representedType;                                    //@synthesize representedType=_representedType - In the implementation block
@property (nonatomic,copy,readonly) NSString * localIdentifier;                                    //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)writableTypeIdentifiersForItemProvider;
+(id)readableTypeIdentifiersForItemProvider;
+(id)representedType;
+(id)referenceForObject:(id)arg1 ;
+(id)filteredObjectReferences:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(NSString *)description;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(NSString *)localIdentifier;
-(NSURL *)libraryURL;
-(id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 referenceType:(id)arg2 ;
-(id)dictionaryForReferenceType:(id)arg1 ;
-(NSString *)representedType;
@end

