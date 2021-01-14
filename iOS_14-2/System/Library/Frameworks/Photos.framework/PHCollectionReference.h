/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHObjectReference.h>

@class NSString;

@interface PHCollectionReference : PHObjectReference {

	NSString* _transientIdentifier;
	NSString* _transientTitle;

}

@property (nonatomic,readonly) BOOL transient; 
@property (nonatomic,copy,readonly) NSString * transientIdentifier;              //@synthesize transientIdentifier=_transientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * transientTitle;                   //@synthesize transientTitle=_transientTitle - In the implementation block
+(id)representedType;
-(id)initWithDictionary:(id)arg1 referenceType:(id)arg2 ;
-(id)dictionaryForReferenceType:(id)arg1 ;
-(id)_transientCollectionInLibrary:(id)arg1 ;
-(id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 transientIdentifier:(id)arg3 transientTitle:(id)arg4 ;
-(NSString *)transientTitle;
-(BOOL)transient;
-(NSString *)transientIdentifier;
@end

