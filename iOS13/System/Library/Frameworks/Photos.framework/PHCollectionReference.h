/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)transientIdentifier;
-(id)initWithDictionary:(id)arg1 referenceType:(id)arg2 ;
-(id)dictionaryForReferenceType:(id)arg1 ;
-(id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 transientIdentifier:(id)arg3 transientTitle:(id)arg4 ;
-(BOOL)transient;
-(id)_transientCollectionInLibrary:(id)arg1 ;
-(NSString *)transientTitle;
@end

